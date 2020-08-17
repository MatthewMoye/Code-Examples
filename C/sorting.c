#include <stdio.h>

void valueSwap(int *x1, int *x2)
{
   int temp = *x1;
   *x1 = *x2;
   *x2 = temp;
}

void arrayPrinter(int ar[], int size)
{
   for (int i = 0; i < size; i++)
   {
      if (i < size - 1)
      {
         printf("%d, ", ar[i]);
      }
      else
      {
         printf("%d\n", ar[i]);
      }
   }
}

void bubbleSort(int ar[], int size)
{
   arrayPrinter(ar, size);
   for (int i = 0; i < size - 1; i++)
      for (int j = 0; j < size - i - 1; j++)
         if (ar[j] > ar[j + 1])
         {
            valueSwap(&ar[j], &ar[j + 1]);
            arrayPrinter(ar, size);
         }
}

void insertionSort(int ar[], int size)
{
   arrayPrinter(ar, size);
   int j, value = 0;
   for (int i = 1; i < size; i++)
   {
      value = ar[i];
      j = i - 1;
      while (j > -1 && ar[j] > value)
      {
         ar[j + 1] = ar[j];
         j--;
      }
      ar[j + 1] = value;
      arrayPrinter(ar, size);
   }
}

void selectionSort(int ar[], int size)
{
   arrayPrinter(ar, size);
   int small;
   for (int i = 0; i < size - 1; i++)
   {
      small = i;
      for (int j = i + 1; j < size; j++)
      {
         if (ar[j] < ar[small])
            small = j;
      }
      valueSwap(&ar[small], &ar[i]);
      arrayPrinter(ar, size);
   }
}

int main()
{
   int ar1[] = {6, 5, 1, 4, 3, 2},
       ar2[] = {6, 5, 1, 4, 3, 2},
       ar3[] = {6, 5, 1, 4, 3, 2};
   int size = sizeof(ar1) / sizeof(ar1[0]);
   printf("Bubble Sort\n");
   bubbleSort(ar1, size);
   printf("\nInsertion Sort\n");
   insertionSort(ar2, size);
   printf("\nSelection Sort\n");
   selectionSort(ar3, size);
   return 0;
}
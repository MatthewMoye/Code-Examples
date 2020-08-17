#include <stdio.h>

int main()
{

   for (int i = 1; i < 5; i++)
   {
      printf("for loop iteration %d\n", i);
   }

   int i = 1;
   while (i < 5)
   {
      printf("while loop iteration %d\n", i);
      i++;
   }

   i = 1;
   do
   {
      printf("do while loop iteration %d\n", i);
      i++;
   } while (i < 5);

   return 0;
}
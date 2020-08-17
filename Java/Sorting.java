import java.util.Arrays;

public class Sorting {
    public static void main(String[] args) {
        int ar1[] = {6, 5, 1, 4, 3, 2},
            ar2[] = {6, 5, 1, 4, 3, 2},
            ar3[] = {6, 5, 1, 4, 3, 2};
        System.out.println("Bubble Sort");
        bubbleSort(ar1, ar1.length);
        System.out.println("\nInsertion Sort");
        insertionSort(ar2, ar2.length);
        System.out.println("\nSelection Sort");
        selectionSort(ar3, ar3.length);
    }

    static void valueSwap(int[] ar, int pos1, int pos2) {
        int temp = ar[pos1];
        ar[pos1] = ar[pos2];
        ar[pos2] = temp;
    }

    static void bubbleSort(int ar[], int size) {
        System.out.println(Arrays.toString(ar));
        for (int i = 0; i < size - 1; i++)
            for (int j = 0; j < size - i - 1; j++)
                if (ar[j] > ar[j + 1]) {
                    valueSwap(ar, j, j + 1);
                    System.out.println(Arrays.toString(ar));
                }
    }

    static void insertionSort(int ar[], int size) {
        System.out.println(Arrays.toString(ar));
        int j, value = 0;
        for (int i = 1; i < size; i++) {
            value = ar[i];
            j = i - 1;
            while (j > -1 && ar[j] > value) {
                ar[j + 1] = ar[j];
                j--;
            }
            ar[j + 1] = value;
            System.out.println(Arrays.toString(ar));
        }
    }

    static void selectionSort(int ar[], int size) {
        System.out.println(Arrays.toString(ar));
        int small;
        for (int i = 0; i < size - 1; i++) {
            small = i;
            for (int j = i + 1; j < size; j++) {
                if (ar[j] < ar[small])
                    small = j;
            }
            valueSwap(ar, small, i);
            System.out.println(Arrays.toString(ar));
        }
    }
}
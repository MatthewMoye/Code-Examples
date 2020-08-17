using System;

namespace Loops {
    public class App {
        static void Main (string[] args) {
            int[] ar1 = { 6, 5, 1, 4, 3, 2 },
                ar2 = { 6, 5, 1, 4, 3, 2 },
                ar3 = { 6, 5, 1, 4, 3, 2 };
            int size = ar1.Length;
            Console.WriteLine ("Bubble Sort");
            bubbleSort (ref ar1, ref size);
            Console.WriteLine ("\nInsertion Sort");
            insertionSort (ref ar2, ref size);
            Console.WriteLine ("\nSelection Sort");
            selectionSort (ref ar3, ref size);
        }

        static void valueSwap (ref int x1, ref int x2) {
            int temp = x1;
            x1 = x2;
            x2 = temp;
        }

        static void bubbleSort (ref int[] ar, ref int size) {
            Console.WriteLine (string.Join (", ", ar));
            for (int i = 0; i < size; i++)
                for (int j = 0; j < size - i - 1; j++)
                    if (ar[j] > ar[j + 1]) {
                        valueSwap (ref ar[j], ref ar[j + 1]);
                        Console.WriteLine (string.Join (", ", ar));
                    }
        }

        static void insertionSort (ref int[] ar, ref int size) {
            Console.WriteLine (string.Join (", ", ar));
            int j, value = 0;
            for (int i = 1; i < size; i++) {
                value = ar[i];
                j = i - 1;
                while (j > -1 && ar[j] > value) {
                    ar[j + 1] = ar[j];
                    j--;
                }
                ar[j + 1] = value;
                Console.WriteLine (string.Join (", ", ar));
            }
        }

        static void selectionSort (ref int[] ar, ref int size) {
            Console.WriteLine (string.Join (", ", ar));
            int small;
            for (int i = 0; i < size - 1; i++) {
                small = i;
                for (int j = i + 1; j < size; j++) {
                    if (ar[j] < ar[small])
                        small = j;
                }
                valueSwap (ref ar[small], ref ar[i]);
                Console.WriteLine (string.Join (", ", ar));
            }
        }
    }
}
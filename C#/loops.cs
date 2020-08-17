using System;

namespace Loops {
    public class App {
        static void Main (string[] args) {
            for (int j = 1; j < 5; j++) {
                Console.WriteLine("for loop iteration {0}", j);
            }

            int i = 1;
            while (i < 5) {
                Console.WriteLine("while loop iteration {0}", i);
                i++;
            }

            i = 1;
            do {
                Console.WriteLine("do while loop iteration {0}", i);
                i++;
            } while (i < 5);
        }
    }
}
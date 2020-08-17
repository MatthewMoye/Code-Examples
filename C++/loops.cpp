#include <iostream>

using namespace std;

int main()
{

   for (int i = 1; i < 5; i++)
   {
      cout << "for loop iteration " << i << "\n";
   }

   int i = 1;
   while (i < 5)
   {
      cout << "while loop iteration " << i << "\n";
      i++;
   }

   i = 1;
   do
   {
      cout << "do while loop iteration " << i << "\n";
      i++;
   } while (i < 5);

   return 0;
}
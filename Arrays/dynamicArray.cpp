/*how to create and change array during runtime
Dynamic arrays are arrays that are allocated at the run time, rather than at compile time. 
Because of that, Dynamic array can change its size during run time.
To allocate memory use "new" 
To deallocate memory use "delete"
*/

#include <iostream>
using namespace std;

int main()
{
    int size;
    cout << "Enter the size of an array: ";
    cin >> size;

   // int myArray[size];
   int* myArray = new int[size];
   
   for(int i=0;i<size;i++)
   {
       cout << "Array[" <<  i << "] ";
       cin >> myArray[i];
   }
   for(int i=0;i<size;i++)
   {
       //cout << myArray[i] << "  "; or
       cout << *(myArray+i) << "  ";
   }
    cout << endl;
    delete[]myArray;
    myArray = NULL;
}
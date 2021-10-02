/*
Linear search is also called as sequential search.
Compares each element in sequence
No preconditions
worst case we search the whole list/array
Time complexity: O(n)
*/
#include <iostream>
using namespace std;

int linearSearch(int arr[],int size,int target)
{
    for(int i=0;i<size;i++)
    {
      if(arr[i] == target)
      return i;    
    }
    return -1;
}


int main()
{
    int arraySize,result,searchValue;
    cout << "Enter the array size: ";
    cin >> arraySize;
    int array[arraySize];
    cout << "Enter the array elements:\n";
    for(int i=0;i<arraySize;i++)
        cin >> array[i];
    cout << "Enter the element to be searched: ";
    cin >> searchValue;
    
    result = linearSearch(array,arraySize,searchValue);
    if(result>=0)
    {
        cout << "Search element found at index: " << result << endl;
    }
    else{
        cout << "Search element not found" << endl;
    }

}
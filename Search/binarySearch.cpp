/*
Binary Search:
Precondition required: sorted array(ascending order)
Divide and conqure. It uses divide and conquer strategy to find the element.
It is an efficient search algorithm as compared to linear search.
Elements must be sorted in order to use Binary search.
Time complexity: O(log n)
*/
#include <iostream>
using namespace std;

int binarySearch(int arr[],int size,int target)
{
    int low=0;
    int high=size-1;
    while(low<=high)
    {
        int mid = low + (high-low)/2;
        if(arr[mid] == target)
        {
            return mid;
        }
        else if(arr[mid] < target)
        {
            low = mid+1;
        }
        else // arr[mid] > target
        {
            high = mid-1;
        }
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
    result = binarySearch(array,arraySize,searchValue);
    if(result >= 0)
    cout << "Search element is found at index: " << result << endl;
    else
    cout << "Search element not found" << endl;
}
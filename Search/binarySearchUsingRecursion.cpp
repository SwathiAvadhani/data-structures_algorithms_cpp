#include <iostream>
using namespace std;

int binarySearch(int arr[],int low,int high,int target)
{
    if(low>high) //base case
    {
        return -1;
    }
    else
    {
        int mid = low + (high-low)/2;
        if(arr[mid]==target)
            return mid;
        else if(arr[mid] > target)
            return binarySearch(arr,low,mid-1,target); //recursive call
        else
            return binarySearch(arr,mid+1,high,target); //recursive call
    }
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
    int low = 0;
    int high = arraySize-1;
    result = binarySearch(array,low,high,searchValue);
    if(result>=0)
    cout << "Search element: " << searchValue << " is found at index: " << result << endl;
    else
    cout << "Search element not found" << endl;
}
/* Selection sort is a simple in-place comparison-based sorting algorithm.
In this method we divide the array in two sub-arrays :
-Sorted (left)
-Unsorted (right)

Initially we consider the whole array to be unsorted.

Select the leftmost element in the unsorted sub-array & swap it with the smallest element in the unsorted sub-array.
Time Complexity O(n^2) */

#include <iostream>
using namespace std;


void selectionSort(int A[],int n)
{
    int i,j,small,temp;
    for(i=0;i<n-1;i++)
    {
        small = i;
        for(j=i+1;j<n;j++)
        {
            if(A[j] < A[small])
                small = j;         
        }

        temp = A[i];
        A[i] = A[small];
        A[small] = temp;
    }
}

void display(int A[],int n)
{
    int i;
    for(i=0;i<n;i++)
    cout << A[i] << " ";
    cout << "\n";
}


int main()
{
    int n;
    cout << "Enter size of array\n";
    cin >> n;
    int A[n];
    cout << "Enter the elements of array:\n";
    for(int i=0;i<n;i++)
    {
        cin >> A[i];
    }
    cout << "Array before sorting:\n";
    display(A,n);
    selectionSort(A,n);

    cout << "Array after sorting:\n";
    display(A,n);
}




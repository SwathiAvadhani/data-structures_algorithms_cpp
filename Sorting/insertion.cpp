/* Insertion sort is a simple in-place comparison-based sorting algorithm.

It maintains a sub-array (sub-list) which is always sorted and is built one element at a time.

By selecting each element and inserting it at its sorted position in the sorted sub-array.

Steps:
1. As initially sorted sub-array is empty when we insert the first element in it, it would be already sorted.
2. Thus we will select each element one by one starting with the second element.
3. We will use two variables value & index, value to store the selected element & index to eventually get the index where we will insert the element in sorted sub-array.
4. Firstly for every selected element index = index of selected element.
5. Then we will compare the selected element with elements in the sorted sub-array.
6. And Shift all the elements greater than selected element one place to the right decrementing index at every step.
7. Finally, we will insert the selected element at its sorted position i.e. at index.*/

#include <iostream>
using namespace std;

void insertionSort(int A[],int n)
{
    int i,index,value;
    for(i=1;i<n;i++)
    {
        value = A[i];
        index = i;
        while(index > 0 && A[index-1] > value)
        {
            A[index] = A[index-1];
            index--;
        }
        A[index] = value;
    }
}

void display(int A[],int n)
{
    int i;
    for(i=0;i<n;i++)
    cout << A[i] << " ";
    cout << endl;
}

int main()
{
    int n;
    cout << "Enter the number of elements:\n";
    cin >> n;
    int A[n];
    cout << "Enter the elements:\n";
    for(int i=0;i<n;i++)
        cin >> A[i];
    cout << "Array before sorting:\n";
    display(A,n);
    insertionSort(A,n);
    cout << "Array after sorting:\n";
    display(A,n);
}


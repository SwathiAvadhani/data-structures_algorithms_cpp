/*Bubble sort is a simple comparison-based algorithm.

In which each pair of adjacent elements are compared and swapped, if they are in wrong order.
Steps:
1. n is number of elements, k is pass number
2. Compare adjacent elements starting from index 0 till index n-k.
3. If element on left is greater than element on the right, Swap them.
4. Else, move to the next pair.
5. At the end of each pass, the greatest element will be at its sorted position.
6. Repeat the process.
We use two nested loops to perform bubble sort, outer loop runs from k=1 to k less than n & Inner loop runs n-k times.*/

#include <iostream>
using namespace std;

void bubbleSort(int A[],int n)
{
    int k,i,temp,flag;
    for(k=1;k<n;k++)
    {
        flag = 0;
        for(i=0;i<n-k;i++)
        {
            if(A[i] > A[i+1])
            {
                temp = A[i];
                A[i] = A[i+1];
                A[i+1] = temp;
                flag = 1;
            }
        }
        if(flag == 0)
            break;
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
    bubbleSort(A,n);

    cout << "Array after sorting:\n";
    display(A,n);
}
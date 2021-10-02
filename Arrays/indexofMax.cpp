#include <iostream>
using namespace std;

int max(int A[],int n)
{
    int max = A[0];
    int index = 0;
    for(int i=1;i<n;i++)
    {
        if(A[i]>max)
        {
            max = A[i];
            index = i;
        }
    }
    return index;
}


int main()
{
    int n,result;
    cout <<"Enter size of array: ";
    cin >> n;
    int A[n];
    cout <<"Enter array elements: ";
    for(int i=0;i<n;i++)
    {
        cin >> A[i];
    }
    result = max(A,n);
    cout << "Index of the largest element of array is:  " << result;
    cout << endl;
}
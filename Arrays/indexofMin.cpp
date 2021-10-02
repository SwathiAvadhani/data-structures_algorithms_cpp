#include <iostream>
using namespace std;

int indexOfMin(int A[],int n)
{
    int min = A[0];
    int index = 0;
    for(int i=1;i<n;i++)
    {
        if(A[i] < min)
        {
            min = A[i];
            index = i;
        }
    }
    return index;
}


int main()
{
    int n,result;
    cout << "Enter the array size: ";
    cin >> n;
    int A[n];
    cout << "Enter the array elements:\n";
    for(int i=0;i<n;i++)
    cin >> A[i];
    result = indexOfMin(A,n);
    cout << "The index of the smallest array element is: " << result << endl;
}
#include <iostream>
using namespace std;

int sum(int A[],int n)
{
    int sum = 0;
    for(int i=0;i<n;i++)
    {
        sum = sum + A[i];
    }
    return sum;
}

int main()
{
    int n,result;
    cout << "Enter the array size: ";
    cin >> n;
    int A[n];
    cout << "Enter the array elements: ";
    for(int i=0;i<n;i++)
        cin >> A[i];
    result = sum(A,n);
    cout << "Sum of the array elements is: " << result;
    cout << endl;
}

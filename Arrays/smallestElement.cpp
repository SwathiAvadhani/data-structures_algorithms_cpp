#include <iostream>
using namespace std;

int min(int A[],int n)
{
    int min = A[0];
    for(int i=1;i<n;i++)
    {
        if(A[i] < min)
        {
            min = A[i];
        }
    }
    return min;
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
    result = min(A,n);
    cout << "The smallest element is: " << result << endl;

}
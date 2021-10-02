#include <iostream>
using namespace std;

int sum(int A[],int n)
{
    //base case
    if(n<=0)
    {
        return 0;
    }
    else{
        return A[n-1] + sum(A,n-1);//recursive call
    }
}


int main()
{
    int A[5] = {4,6,1,10,5};
    int arraySize= sizeof(A)/sizeof(A[0]);
    cout <<"Length of array is: " << arraySize << endl;
    int result;
    result = sum(A,arraySize);
    cout << "Sum of the array elements is: " << result << endl;
}
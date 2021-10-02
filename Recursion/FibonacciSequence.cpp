#include <iostream>
using namespace std;

int fib(int n)
{
    if(n==1||n==2)
    {
        return 1;
    }
    else{
        return fib(n-1) + fib(n-2);
    }
}

int main()
{
    int n,result;
    cout << "Enter a positive integer: ";
    cin >> n;
    result = fib(n);
    cout << "The result is: " << result;
    cout << endl;
}
#include <iostream>
using namespace std;

int factorial(int num)
{
    //exit condition
    if(num==1||num==0)
    {
        return 1;
    }
    else{
        //recursive function call
        return  num*factorial(num-1);
    }
}



int main()
{
    int n,result;
    cout << "Enter positive integer: ";
    cin >> n;
    result = factorial(n);
    cout << "Factorial is: " << result;
    cout << endl;
}
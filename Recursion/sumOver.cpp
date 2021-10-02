/* Write a recursive function named sumOver that takes an int parameter n and returns a double value which is the sum of the reciprocals of the first n positive integers. 
The reciprocal of x is 1.0/x. For example, sumOver(3) returns 1.833 which is 1.0/1 + 1.0/2 + 1.0/3. Your function must work for values of n greater than or equal to 0. By definition, sumOver(0) = 0.
Do not use loops, extra parameters, or global or static variables*/

#include <iostream>
using namespace std;

double sumOver(int num)
{   
    if(num==0)
        return 0.0;
    else if(num==1)
        return 1.0;
    else
        return 1.0/(double)num + sumOver(num-1);//recursive call
   
}

int main()
{
    int n;
    double result;
    cout << "Enter a positive integer: ";
    cin >> n;
    result = sumOver(n);
    cout << "The sum of the reciprocal is: " << result;
    cout << endl;
}


#include <iostream>
using namespace std;

void printNumberTillZero(int number)
{
    cout << number;
    cout << " ";
    //exit condition
    if(number==0){
        return;
    }
    //recursive function call
    printNumberTillZero(number-1);

}

int main()
{
    printNumberTillZero(10);
    //return 0;
    cout << endl;
}
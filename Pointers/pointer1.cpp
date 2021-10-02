#include <iostream>
using namespace std;

int main()
{
    int n = 4;
    cout << &n << endl;
    int* ptr = &n;
    cout << *ptr << endl;
    *ptr = 8;
    cout << *ptr << endl;

}
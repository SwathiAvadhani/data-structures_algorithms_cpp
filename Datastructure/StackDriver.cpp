#include <iostream>
#include "IntStack.h"
using namespace std;
#include "DynIntStack.h"

int main()
{
    //set up stack
    //IntStack stack;
    DynIntStack stack;
    cout << "pushing 2\n";
    stack.push(2);
    cout << "pushing 3\n";
    stack.push(3);
    cout << "pushing 5\n";
    stack.push(5);
    int x;
    cout << "popping...\n";
    x = stack.pop();
    cout << x << endl;
    cout << "popping...\n";
    x = stack.pop();
    cout << x << endl;
    cout << "pushing 10\n";
    stack.push(10);
   // stack.printStackElements();
    
}
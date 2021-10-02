
/* Stack - A datastructure that stores and retrives items in last in first out order(LIFO)
Undo operation
Back button - in browser 
*/
#include <iostream>
#include <stack>
using namespace std;


void printStackElements(stack<int> stack)
{
    while(!stack.empty())
    {
        cout << "Stack elements: " << stack.top() << endl;
        stack.pop();
    }
}

int main()
{
    // Functions : empty ; size ; push ; pop ; top
    stack<int>numberStack;

    numberStack.push(1);
    numberStack.push(2);
    numberStack.push(3);
    numberStack.pop();
   // numberStack.pop();
    //numberStack.pop();

    printStackElements(numberStack);
    //cout << "Stack element" << " " << numberStack.top();
    if(numberStack.empty())
        cout << "Stack is empty" << endl;
    else 
        cout << "Stack is not empty" << endl;

        cout << "Stack size is: " << numberStack.size() << endl;

}
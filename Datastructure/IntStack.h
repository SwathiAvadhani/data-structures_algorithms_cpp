#include<iostream>
#include<cassert>
using namespace std;

class IntStack
{
    private:
        static const int STACK_SIZE = 100;
        int stackArray[STACK_SIZE];
        int top; //index to the top of the stack
        public:
        //constructor
        IntStack()
        {
            top = -1;
        }//empty stack
        //operations
        void push(int num);
        int pop();
        bool isFull() const;
        bool isEmpty() const;
        void printStackElements();
};

void IntStack :: push(int num)
{
    assert(!isFull());
    top++;
    stackArray[top] = num;
}

int IntStack :: pop()
{
    assert(!isEmpty());
    int num = stackArray[top];
    top--;
    return num;
}

bool IntStack :: isFull() const
{
    return (top == STACK_SIZE-1);
}

bool IntStack :: isEmpty() const
{
    return (top == -1);
}

void IntStack :: printStackElements()
{
    while(top!=-1)
    { 
    cout << "Stack elements: " << stackArray[top]<< endl;
    IntStack::pop(); 
    }
}
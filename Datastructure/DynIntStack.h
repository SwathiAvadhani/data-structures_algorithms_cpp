#include <iostream>
using namespace std;

class DynIntStack
{
    private:
        struct Node{
            int data;
            Node* next;
        };
        Node* head; //ptr to top

    public:
    //constructor , empty stack
    DynIntStack() {head = NULL;}
    //operations
    void push(int);
    int pop();
    bool isFull() const {return false;}
    bool isEmpty() const {return head==NULL;}   
};

void DynIntStack :: push(int num)
{
    assert(!isFull());
    //allocate new node
    Node* temp = new Node; 
    temp -> data = num;
    temp -> next = head; //insert at head of list
    head = temp;
}
int DynIntStack :: pop()
{
    assert(!isEmpty());
    int value = head -> data;
   /* Node* temp = new Node;
    temp = head;*/
    Node* temp = head; 
    head = head -> next; //head points to second item
    delete temp; //deallocate front item
    return value;
}

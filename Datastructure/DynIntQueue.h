#include <iostream>
using namespace std;

class DynIntQueue
{
    private:
        struct Node
        {
            int data;
            Node* next;
        };
        Node* front;
        Node* rear;

    public:
    //constructor, empty queue
    DynIntQueue() {front=NULL; rear=NULL;}
    //operations
    void enqueue(int);
    int dequeue();
    bool isFull() {return false;}
    bool isEmpty() {return front==NULL;}
};

void DynIntQueue :: enqueue(int num) //add at rear that is at the end
{
    assert(!isFull());
    //allocate new node
    Node* temp = new Node;
    temp -> data = num;
    temp -> next = NULL;
    if(isEmpty())
    {
        rear = front = temp;   //set front and rear to node, that it's the only node in the list
    }
    else{
        rear -> next = temp; // append to rear of the list
        rear = temp; //reset rear
    }
}
int DynIntQueue :: dequeue() //delete at front 
{
    assert(!isEmpty());
    int result = front -> data;
    Node* temp = front;
    front = front -> next;
    delete temp;
    return result;
}

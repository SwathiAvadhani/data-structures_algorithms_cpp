#include <iostream>
#include <cassert>
using namespace std;

class IntQueue
{
    private:
        static const int QUEUE_SIZE = 100;
        int queueArray[QUEUE_SIZE];
        int front;
        int rear;
        int numItems;

    public:
    //constructor , initialize an empty queue
    IntQueue() {front=0; rear=-1; numItems=0;}
    //operations
    void enqueue(int);
    int dequeue();
    bool isFull();
    bool isEmpty();
    void printQueueElements();
};

void IntQueue :: enqueue(int num)
{
    assert(!isFull());
    rear = (rear+1) % QUEUE_SIZE;
    queueArray[rear] = num;
    numItems++;
}
int IntQueue :: dequeue()
{
    assert(!isEmpty());
    int result = queueArray[front];
    front = (front+1) % QUEUE_SIZE;
    numItems--;
    return result;
}
bool IntQueue :: isFull()
{
    return (numItems == QUEUE_SIZE);
}
bool IntQueue :: isEmpty()
{
    return (numItems == 0);
}
//not perfect still fixing
void IntQueue :: printQueueElements()
{
    while(numItems != 0)
    {
        cout << "Queue front Elements: " << queueArray[front] << endl;
        cout << "Queue rear Elements: " << queueArray[rear] << endl;  
        numItems--;  
    }
}
#include <iostream>
using namespace std;
#include "IntQueue.h"
#include "DynIntQueue.h"

int main()
{
    //set up queue
    //IntQueue q;
    DynIntQueue q;
    cout << "Enqueue 2\n";
    q.enqueue(2);
    cout << "Enqueue 3\n";
    q.enqueue(3);
    cout << "Enqueue 5\n";
    q.enqueue(5);
    int item;
    cout << "Dequeuing...\n";
    item = q.dequeue();
    cout << "Dequeuing...\n";
    item = q.dequeue();
    cout << "Enqueue 10\n";
    q.enqueue(10);
    cout << "last dequeued item\n";
    cout << item <<endl;
   // q.printQueueElements();
}
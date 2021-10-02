/* Queue - A datastructure that stores and retrives items in First in Last Out manner(FIFO)
It is also known as FCFS (First come-First served)
A real-life example of a queue is a queue in a bank - the person who is at the front of the queue will be served first, and the new people who come into the bank will stand at the end of the queue and they will be served last. this means that we add new elements at the end of the queue and we remove them from the front.

We use queues in programming whenever we need things to happen in the exact order they were called, but the computer cannot keep up with the speed and execute those things fast enough.
In this situation, we put those things in a queue and we process/remove them from the front and add new things at the end of the queue.
The most common example of how queues are used in programming is the way a printer works - you can send multiple pages to print, but because printer takes a few seconds to print each page, all pages will be in a queue waiting for their turn to be printed, and they will be printed in the exact order they were sent to print.

I'm also going to share some examples(online orders, transactions) of how I use queues in my programming work, and I'll explain the code of STL Queue and teach you about the most important functions used with queues:
push - add an element at the end 
pop - remove an element from the front
size - tells you the size of the queue
front - first element of the queue
back - the last element of the queue
empty - tells you if the queue is empty
*/

#include <iostream>
#include <queue>
using namespace std;

void printQueueElements(queue<int> queue){
    while(!queue.empty())
    {
        cout << queue.front() << endl;
        queue.pop();
    }
}

int main()
{
    queue<int>myQueue;

    myQueue.push(1);
    myQueue.push(2);
    myQueue.push(3);
    //myQueue.pop();

    cout << "Size of the Queue is: " << myQueue.size() << endl;
    cout << "First queue element is: " << myQueue.front() << endl;
    cout << "Last queue element is: " << myQueue.back() << endl;

    printQueueElements(myQueue);
}
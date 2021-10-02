
/* linked list is a data structure used to store and organize data. 
concept: Dynamically allocated data structures may be linked together in memory
to form a chain.

Arrays vs LinkedList
1. Fixed memory | Dynamic memory
2. continous allocation | dynamic(spread out/random order) allocation
3. Linked List needs more memory since it stores two thing: Value and a pointer to the next element
Usage:
Use array when you need fast access to data. Accesing a particular element requires to traverse through all the items in the list
Use Linked list when you constantly add or remove 
*/

#include <iostream>
using namespace std;

class Node{
    public:
    int Value;
    Node* Next;
};

void printlist(Node* n)
{
    while(n!=NULL)
    {
        cout << n -> Value << endl;
        n = n -> Next;
    }
}
int main()
{
    Node* head = new Node();
    Node* second = new Node();
    Node* third = new Node();

    head -> Value = 1;
    head -> Next = second;

    second -> Value = 2;
    second -> Next = third;

    third -> Value = 3;
    third -> Next = NULL;

    printlist(head);

}
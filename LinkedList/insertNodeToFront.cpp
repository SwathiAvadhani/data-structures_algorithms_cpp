#include <iostream>
using namespace std;


class Node
{
    public:
    int Value;
    Node* Next;
};

void printList(Node* n)
{
    while(n!=NULL)
    {
        cout << n -> Value << endl;
        n = n -> Next;
    }
}

void insertAtFront(Node** head,int newValue)
{
    //STEP1: Prepare a new node
    Node* newNode = new Node();
    newNode -> Value = newValue;
    //STEP2: Put new node in front of current head
    newNode -> Next = *head;
    //STEP3: Make head of the list to point to new node
    *head = newNode;
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

    insertAtFront(&head,-1);
    insertAtFront(&head,-2);
    printList(head);

}
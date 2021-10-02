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
    while (n!=NULL)
    {
        cout << n -> Value << endl;
        n = n -> Next;
    }
    
}

void insertAtTheEnd(Node** head,int newValue)
{
    //STEP1: Prepare a new node
    Node* newNode = new Node();
    newNode -> Value = newValue;
    newNode -> Next = NULL;
    //STEP2: If linked list is empty, new node will be the head
    if(*head == NULL)
    {
        *head = newNode;
        return;
    }
    //STEP3: Find the last node
    Node* last = *head;
    while(last->Next!=NULL)
    {
        last = last -> Next;
    }
    //STEP4: Insert new node after the last node (at the end)
    last -> Next = newNode;
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
    
    insertAtTheEnd(&head,4);
    insertAtTheEnd(&head,5);
    printList(head);

}
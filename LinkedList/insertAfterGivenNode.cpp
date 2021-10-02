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

void insertAtfer(Node* previous,int newValue)
{
    //STEP1: Check if previous node is null
    if(previous == NULL)
    {
        cout << "Previous node cannot be null" << endl;
        return;
    }
    //STEP2: Prepare new node
    Node* newNode = new Node();
    newNode -> Value = newValue;
    //STEP3: Insert new node after previous
    newNode -> Next = previous -> Next;
    previous -> Next = newNode;
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
    insertAtfer(head,-1);
    insertAtfer(second,-2);
    printList(head);

}
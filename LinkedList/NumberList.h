#include <iostream>
using namespace std;

class NumberList
{
    private:
        struct ListNode{
            double value;
            ListNode* next;
        };
        ListNode* head;
    public:
        NumberList();
        ~NumberList();
        //Operations
        void appendNode(double);
        void displayList();
        void insertBefore(double,double);
        bool isEmpty();
        void deleteNode(double);
};

NumberList :: NumberList()
{
    head = nullptr;
}
NumberList :: ~NumberList()
{
    ListNode *p;
    while(head!=nullptr)
    {   
        p = head;
        head = head -> next;
        delete p;
    }
}
bool NumberList :: isEmpty()
{
    return (head == nullptr);
}
void NumberList :: appendNode(double num)
{
    //add item at the end of the list
    //create a new node and store the data in it
    ListNode* newNode = new ListNode;
    newNode -> value = num;
    newNode -> next = nullptr;
    //if empty, make head point to newnode
    if(isEmpty())
        head = newNode;
    else{
    //append to end of non-empty list 
    ListNode* p = head;
    //traverse list to find last node
    while(p -> next !=nullptr)
    { 
        p = p -> next;
    }
    p -> next = newNode; //now p pts to last node, make last node point to newnode
    }
}
void NumberList :: displayList()
{
    ListNode* p = head;
    while(p != nullptr)
    {
        cout << p -> value << " ";
        p = p -> next;
    }
    cout << endl;
}
void NumberList :: deleteNode(double num)
{
    ListNode* p = head; //to traverse the list
    ListNode* n = nullptr;
    //skip nodes not equal to num, stop at last
    while(p!=nullptr && p->value!=num) 
    {
        n = p; //save it!
        p = p -> next; //advance it
    }
    //p not null : num was found, set links and delete
    if(p!=nullptr)
    {
        if(n==nullptr)
        {
            head = head -> next;
            delete p;
        }
        else{
            n -> next = p -> next;
            delete p;
        }
    }
    
}
void NumberList :: insertBefore(double num,double target)
{
    //create a new node
    ListNode* newNode = new ListNode;
    newNode -> value = num;
    //set up pointers
    ListNode* p = head;
    ListNode* n = nullptr;
    //advance pointers through list to insertion point
    while(p && p->value != target)
    {
        n = p;
        p = p -> next;
    }
    if(n == nullptr)
    {   
        head = newNode; //insert before first
        newNode -> next = p;
    }
    else{  //insert after n, before p
        n -> next = newNode;
        newNode -> next = p;
    }

}

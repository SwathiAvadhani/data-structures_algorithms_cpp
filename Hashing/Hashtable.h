#include <iostream>
#include <string>
using namespace std;

template<typename T>
class Node{
    public:
        string key;
        T value;
        Node* next;

        Node(string key,T value){
            this->key=key;
            this->value=value;
            next=NULL;
        }
        ~Node(){
            if(next!=NULL){
                delete next;
            }
        }
};

template<typename T>
class HashTable{
    Node<T> **table;
    int cs; //total entries that have been inserted
    int ts; //size of the table

    int hashFn(string key)
    {
        int idx=0;
        int power=1;
       // for(auto ch:key)
        for(int i=0;i<key.size();i++)
        {
            idx = (idx + ch*power)%ts;
            power = (power*29)%ts;
        }
        return idx;
    }
    void rehash()
    {
        //save the ptr to the oldTable and we will do insertions in the new table
        Node<T>** oldTable = table;
        int oldTs = ts;
        //increase the table size
        cs = 0;
        ts = 2*ts + 1; //should be prime but we are just making it odd
        table = new Node<T> *[ts];

        for(int i=0;i<ts;i++){
        table[i] = NULL;
        }
        //copy elements from old table to new table
        for(int i=0;i<oldTs;i++){
            Node<T>* temp = oldTable[i];
            while(temp!=NULL){
                string key = temp->key;
                T value = temp->value;
                //happen in the new table
                insert(key,value);
                temp = temp->next;

            }
            //destroy the ith linked list
            if(oldTable[i]!=NULL)
                delete oldTable[i]; //delete the first node, to delete remaining nodes in memory call destructor
        }
        delete [] oldTable; //destroy whole table
    }

    public:
        HashTable(int default_size=7){
            cs=0;
            ts=default_size;
            //allocate array
            table = new Node<T> *[ts]; //each bucket is of the type NODE* , total size is ts
            //by default each of the bucket contains some garbage and we dont want this because bucket is our head,
            //so  we want it to contain each if linked list doesn't exists
            for(int i=0;i<ts;i++)
                table[i] = NULL; 
        }

        void insert(string key,T val)
        {
            //Next
            int idx = hashFn(key);
            //create new node
            Node<T>* n = new Node<T>(key,val);
            //Insertion at head of the linked list
            n->next = table[idx];
            table[idx] = n;
            cs++; 
            float load_factor = cs/float(ts);
            if(load_factor > 0.7)
                rehash();
        }

        void print(){
            //Iterate over buckets
             for(int i=0;i<ts;i++)
             {
                 cout<<"Bucket "<<i<<"->";
                 Node<T>  *temp = table[i];
                 while(temp!=NULL)
                 {
                     cout << temp -> key << "->";
                     temp = temp->next;
                 }
                 cout << endl;
             }
        }
};
#include <iostream>
#include "NumberList.h"
using namespace std;

int main()
{
    NumberList list;  //set up the list   

    //DeleteNode example
    list.appendNode(2.5);
    list.appendNode(7.9);
    list.appendNode(12.6);
    list.displayList();
    cout << endl << "remove 7.9:" << endl;
    list.deleteNode(7.9);
    list.displayList();
    cout << endl << "remove 8.9:" << endl;
    list.displayList();
    cout << endl << "remove 2.5:" << endl;
    list.deleteNode(2.5);
    list.displayList();
    cout << endl << "remove 12.6:" << endl;
    list.deleteNode(12.6);
    cout << endl;
    //InsertBefore example
    list.appendNode(2.5);
    list.appendNode(7.9);
    list.appendNode(12.6);
    list.displayList();
    list.insertBefore(8.5,12.6);
    list.displayList();
    list.insertBefore(1.5,2.5);
    list.displayList();
    list.insertBefore(21.5,25.0);
    list.displayList();
}
#include <iostream>
using namespace std;


void printNumber(int* numberPtr)
{
    cout << *numberPtr << endl;
}

void printLetter(char* charPtr)
{
    cout << *charPtr << endl;
}
void print(void* ptr, char type)
{
    switch(type)
    {
        case 'i' : cout << *((int*) ptr) << endl; 
        /* we must be very carefull while using void pointers becase comiler wont throw an error in certain cases for example, 
        if the above statement was typed as case 'i' : cout <<  *((int*) ptr) << endl; it would still display result and no error is displayed
        */
            break;
        case 'c' : cout << *((char*)ptr) << endl;
            break;
    }
}

int main()
{
    int number = 5;
    char letter = 'a';

  /*  printNumber(&number);
    printLetter(&letter);*/

    print(&number,'i');
    print(&letter,'c');

}


#include <iostream>
using namespace std;

int main()
{
    int luckynumbers[5];
    for(int i=0;i<=4;i++)
    {
        cout << "Numbers: ";
        cin >> luckynumbers[i];
    }

    // cout << luckynumbers << endl; --- array name stores the address of the first element
    //cout << *(luckynumbers+2) << endl; --- this statement will display value of the third array element which is equivalent to luckynumbers[2]
    for(int i=0;i<=4;i++)
    {
        //cout << luckynumbers[i] << endl;
        //using pointers to print array elements
        cout << *(luckynumbers+i) << endl;
    }
}
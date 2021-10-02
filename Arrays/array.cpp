#include <iostream>
using namespace std;

int main()
{
    //Dispaly total, average, inTwoYears

    float monthsArray[6];
    float total=0;

    for(int i=0;i<=5;i++)
    {
        cout << "Enter amount saved for the month: " << i+1 << endl;
        cin >> monthsArray[i];
        total+=monthsArray[i];
    }
    float average = total/6;
    float inTwoYears = average * 24;

    cout << "Total = " << total << endl;
    cout << "Average = " << average << endl;
    cout << "inTwoYears = " << inTwoYears << endl;

}
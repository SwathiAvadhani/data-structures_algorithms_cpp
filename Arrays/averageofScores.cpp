#include <iostream>
using namespace std;

int main()
{
    int NUM_SCORES = 8;
    int scores[NUM_SCORES];
    cout << "Enter the " << NUM_SCORES << " programming assignment scores:\n";
    for(int i=0;i<NUM_SCORES;i++)
    cin >> scores[i];
    int total;
    for(int i=0;i<NUM_SCORES;i++)
    total = total + scores[i]; //total+= scores[i];

    double average = (double)total/(double)NUM_SCORES;
    cout << "The average of the scores is: " << average << endl;  
}
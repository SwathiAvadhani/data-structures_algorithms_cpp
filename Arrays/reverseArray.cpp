#include <iostream>
using namespace std;

void reverseArray(int numberArr[],int size)
{
    int temp = 0;
    for(int i=0;i<(size/2);i++)
    {
        temp = numberArr[i];
        numberArr[i] = numberArr[size-1-i];
        numberArr[size-1-i] = temp;
    }
}

void displayArray(int numberArr[],int size)
{
    for(int i=0;i<size;i++)
    cout << numberArr[i] << " ";
    cout << endl;
}

int main()
{
    int arraySize;
    cout << "Enter the array size: ";
    cin >> arraySize;
    int numberArray[arraySize];
    cout << "Enter the array elements:\n";
    for(int i=0;i<arraySize;i++)
        cin >> numberArray[i];
    cout << "Array as enterted:\n";
    displayArray(numberArray,arraySize);
    reverseArray(numberArray,arraySize);
    cout << "Array after reversed:\n";
    displayArray(numberArray,arraySize);
}
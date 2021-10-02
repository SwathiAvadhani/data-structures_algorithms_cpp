#include <iostream>
using namespace std;

int getMin(int numbers[],int size)
{
    int min = numbers[0];
    for(int i=1;i<5;i++)
    {
        if(numbers[i] < min)
        {
            min = numbers[i];
        }
    }
    return min;
}

int getMax(int numbers[],int size)
{
    int max = numbers[0];
    for(int i=1;i<5;i++)
    {
        if(numbers[i] > max)
        {
            max = numbers[i];
        }
    }
    return max;
}

void getMinAndMax(int numbers[],int size,int* min,int* max)
{
    for(int i=1;i<5;i++)
    {
        if(numbers[i] < *min)
        {
            *min = numbers[i];
        }

        if(numbers[i] > *max)
        {
            *max = numbers[i];
        }
    }
}

int main()
{
    int numbers[5] = {5,9,-1,7,22};
   /* cout << getMin(numbers,5) << endl;
    cout << getMax(numbers,5) << endl;*/

    int min = numbers[0];
    int max = numbers[0];

    getMinAndMax(numbers,5,&min,&max);
    cout << "Minimum value of an array is: " << min << endl;
    cout << "Maximum value of an array is: " << max << endl;
        
}
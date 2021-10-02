#include <iostream>
using namespace std;

void findTwoSum(int nums[], int size, int target) {
    int numberToFind;
    for (int i = 0; i < size; i++) {
        numberToFind = target - nums[i];
        for (int j = i+1; j < size; j++) {
            if(numberToFind == nums[j]) {
                cout << i << " " << j << endl;
            } 
        }
    }
}
int main()
{
    int numbers[] = {1,3,7,9,2};
    int target;
    int numberToFind;
    int arraySize = sizeof(numbers)/sizeof(numbers[0]);
    cout << "Enter the target element: ";
    cin >> target;
    findTwoSum(numbers,arraySize,target);
    
    return 0;
}
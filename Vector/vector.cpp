/*vectors are sequence containers respresenting arrays that can change in size
Just like arrays vectors use contiguous storage locations for their elements, which means that their elements can also be accessed directly in O(1)time.
But unlike arrays, their size can change dynamically, with their storage being handled automatically by the container.
*/

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    //Demo Vector
    vector<int> arr; //{1,2,10,12,15}; valid some complier error need to check for solution

    //Fill constructor
    //vector<int> arr(10,7);

    //push_back to add new element at the end of the vector
    arr.push_back(16);
    arr.push_back(20);
    arr.push_back(25);
    
    //pop_back to remove an element from vector
    arr.pop_back();

    arr.push_back(30);

    //print all the elements
    for(int i=0;i<arr.size();i++)
    cout << arr[i] << endl;

    //size of the vector(no of elements)
    cout << arr.size() << endl;

    //capacity of the vector (space)
    cout << arr.capacity() << endl;
}
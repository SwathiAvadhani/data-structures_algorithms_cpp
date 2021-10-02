// unordered_map : internally it implements hashing with seperate chaining

#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    unordered_map<string,int> menu;
    // Insert Key value pair inside hashtable O(1) operation
    menu["maggi"] = 15;
    menu["colddrink"] = 20;
    menu["dosa"] = 99;
    menu["pizza"] = 499;
    menu["Indianplatter"] = 399;

    // update query - for example change dosa price - increment by 10%
    menu["dosa"] = (1+0.1) * menu["dosa"];

    //Deletion - erase() function is used to remove an element from map
    menu.erase("dosa");

    // Searching inside a collection of key-value pairs (stored inside hashtables)
    // count() tells whether a particular item is present inside hashtable or not
    // count() return 0 or 1 , [] is an operator overloader
    string item;
    cin >> item;

    if(menu.count(item)==0) {
        cout << item << " is not available" << endl;
    } else {
        cout << item << " is available and its cost is " << menu[item] << endl;
    }

    // we can iterate over all the key-value pairs that are present
    // pair is an inbuild class in c++ , has two attributes first-represents key and second-represents value
    for(pair<string,int> item:menu) {
        cout << item.first << "-" << item.second << endl;
    }
    return 0;
}
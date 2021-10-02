/*Structures are user-defined data types. 
They are used to represent information about something more complicated than a single number, character, array of numbers, 
characters, etc. So, you can use a structure to represent information about a Person, an Animal, a Sport, a Game, a Car...*/

#include <iostream>
using namespace std;

struct Smartphone
{
    string name;
    int storageSpace;
    string color;
    float price;
};

struct Person
{
    string name;
    int age;
    Smartphone smartphone;
};


void  printSmartPhoneInfo(Smartphone smartphone)
{
    cout << "Smartphone name: " << smartphone.name << endl;
    cout << "Smartphone storagespace: " << smartphone.storageSpace << endl;
    cout << "Smartphone color: " << smartphone.color << endl;
    cout << "Smartphone price: " << smartphone.price << endl;

}

void printPersonInfo(Person person)
{
    cout << "Person Name: " << person.name << endl;
    cout << "Person's age: " << person.age << endl;
    printSmartPhoneInfo(person.smartphone);
}

int main()
{
    Smartphone smartphone;
    smartphone.name = "iphone 12";
    smartphone.storageSpace = 256;
    smartphone.color = "gray";
    smartphone.price = 999.99;

    Smartphone smartphone2;
    smartphone2.name = "samsung galaxy21 ultra";
    smartphone2.storageSpace = 64;
    smartphone2.color = "black";
    smartphone2.price = 888.88;

  //  printSmartPhoneInfo(smartphone);
  //  printSmartPhoneInfo(smartphone2);

    Person p;
    p.name = "Swathi";
    p.age = 27;
    p.smartphone = smartphone;

    printPersonInfo(p);
}

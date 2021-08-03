#include <iostream>

using namespace std;

int main(){
    //Reference
    string fruit = "Banana";
    string &item = fruit;

    cout << "Reference: " << item << endl;

    //Memory address

    cout << "Memory Address: " << &item << endl;
    cout << "Memory Address: " << &fruit << endl;
    item = "apple";
    cout << "Reference: " << item << endl;

    // Creating a pointer, variable that stores memory address as a value
    string* pointer = &fruit;

    cout << "Pointer: " << pointer << endl;

    *pointer = "Something else!";

    cout << "Deference: " << *pointer << endl;
    
    return 0;
}
#include <iostream>
#include <string>

using namespace std;

class Dog {
public:
    string name;
    int age;

    void bark() {
        cout << name << " bhau bhauu" << endl;
    }
};

int main() {
    Dog mydog;

    mydog.name = "kaliiii";
    mydog.age = 3;

    cout << "Dog's Name: " << mydog.name << endl;
    cout << "Dog's Age:  " << mydog.age << " years old" << endl;

    mydog.bark();

    return 0;
}
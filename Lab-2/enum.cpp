#include <iostream>
#include <string>
using namespace std;

enum direction {
    east,
    west,
    north,
    south
};

// Array order must perfectly match the enum order
const string directionNames[] = {"east", "west", "north", "south"};

int main() {
    for (int a = 0; a < 4; a++) {
        cout << directionNames[a] << endl;
    }
    return 0;
}
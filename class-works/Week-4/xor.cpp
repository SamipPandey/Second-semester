#include <iostream>
#include <vector>
using namespace std;

int f(const vector<int>& n2) {
    int u = 0;
    
    for (int i : n2) {
        u ^= i;
    }
    
    return u;
}

int main() {
    vector<int> n2 = {4, 1, 2, 1, 2};
    
    int r = f(n2);
    
    cout << "The unique element is: " << r << endl;
    
    return 0;
}
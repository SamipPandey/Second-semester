#include<iostream>
using namespace std;

class USdollar {
public:
    float dollar;
    USdollar() {
        dollar = 0;
    }
    
    USdollar(float a) : dollar(a) {}
    
    ~USdollar() {}

    USdollar(int x) {
        dollar = static_cast<float>(x) / 150.0; 
    }

    operator int() {
        return dollar * 150; 
    }
};

int main() {
    //basic to user defined
    int nr = 15000; 
    USdollar d = nr; 
    cout << "Rs. " << nr << " in USD is: $" << d.dollar << endl;
    //user defined to basic
    USdollar Dol = int(50.5); 
    int totalRupees = Dol; 
    cout << "$" << Dol.dollar << " in NPR is : Rs. " << totalRupees << endl;

    return 0;
}
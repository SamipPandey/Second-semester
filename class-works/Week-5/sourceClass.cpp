#include <iostream>
using namespace std;

class usd; 

class nrp {
    float rupee;
public:
    nrp() {
        rupee = 0;
    }
    nrp(float a) : rupee(a) {}
    ~nrp() {}

    void setdata() {
        cout << "Enter money in Nrp: ";
        cin >> rupee;
    }

    float getrupee() {
        return rupee;
    }
    operator usd(); 
};

class usd {
    float usdollar;
public:
    usd() {
        usdollar = 0;
    }
    usd(float a) : usdollar(a) {}
    ~usd() {}
    
    void displaydata() {
        cout << "In dollar is: " << usdollar << endl;
    }
};

nrp::operator usd() {
    float dollars = rupee / 135.0; 
    return usd(dollars); 
}

int main() {
    nrp a;
    
    a.setdata(); 
    
    usd b = a;   
    
    b.displaydata(); 
    
    return 0;
}
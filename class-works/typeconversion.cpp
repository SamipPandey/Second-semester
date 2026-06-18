//wap a simple program to covert user deined datatype us dollar into basic datatype nepali rupees and vice versa
#include<iostream>
using namespace std;
class USdollar{
    public:
    float dollar;
    public:
    USdollar(){
        dollar=0;
    }
    USdollar(float a):dollar(a){}
    ~USdollar(){}
    USdollar(int x){
        dollar=150*x;
    }
    operator int(){
        int x=d.dollar;
    return x/150;
}
};

int main(){
    int nr=100;
    USdollar d=nr;
    cout<<d.dollar<<endl;
    return 0;
}
#include<iostream>
#include<string>
using namespace std;

class Basket{
    string a;
    int rate=450;
public:

    Basket(){
        a=" ";
        rate=0;
    }
    Basket(string b){
        a=b;
    }
    ~Basket(){}

    void print(){
        cout << a << " " <<rate << endl;
    }
};

int main(){
    string a = "apple";
    Basket m = a;
    m.print();

    return 0;
}
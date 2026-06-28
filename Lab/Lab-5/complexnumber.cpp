//write a program to overload binary operator to find sum of two complex number
#include<iostream>
using namespace std;

class Complex{
    int real;
    int img;
    public:
    Complex(){
        real=0;
        img=0;
    }
    Complex(int a, int b):real(a),img(b){}
    ~Complex(){

    }
    void getdata(){
        cout<<"\nEnter the real and imaginary number :";
        cin>>real>>img;
    }
    void displaydata(){
        cout<<"Sum is"<<real<<"+"<<img<<"i"<<endl;
    }

    Complex operator+(Complex r){
        int a=this->real+r.real;
        int b=this->img+r.img;
        return Complex(a,b);

    }
};
int main(){
    Complex c1,c2,c3;
    c1.getdata();
    c2.getdata();
    c3=c1+c2;
    c3.displaydata();
    return 0;


}
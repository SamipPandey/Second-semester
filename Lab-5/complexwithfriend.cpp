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

    friend Complex operator+(Complex,Complex);

};
    Complex operator+(Complex r,Complex a){
        Complex obj;
        obj.real=a.real+r.real;
        obj.img=a.img+r.img;
        return obj;
    }
int main(){
    Complex c1,c2,c3;
    c1.getdata();
    c2.getdata();
    c3=c1+c2;
    c3.displaydata();
    return 0;

}
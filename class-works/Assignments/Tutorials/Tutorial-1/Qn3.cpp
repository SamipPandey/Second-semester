// C++ program that demonstrates the use of friend classes for coordinate conversion

#include<iostream>
#include<cmath>
using namespace std;

class polar;
class cartisan{
    int x;
    int y;
    public:
        cartisan(){
        x=0;
        y=0;
        }

    cartisan(int a, int b):x(a),y(b){}
    ~cartisan(){}
    void setdata(){
        cout<<"Enter value of x :";
        cin>>x;
        cout<<"Enter the value of y :";
        cin>>y;

    }
    int getx(){
        return x;
    }
    int gety(){
        return y;
    }
    friend class polar;

};
class polar{
    int r;
    float theta;
    public:
    polar(){
        r=0;
        theta=0;
    }
    polar(int a, int b):r(a),theta(b){}
    ~polar(){}
    void conversion(cartisan& p){
        int x=p.getx();
        int y=p.gety();
        r=sqrt(x*x+y*y);
        theta=atan2(y,x);
    }
    void displaydata(){
        cout<<"r is :"<<r<<endl;
        cout<<"theta is :"<<theta<<endl;
    }

};
int main(){

    cartisan a;
    polar b;
    a.setdata();
    b.conversion(a);
    b.displaydata();

    return 0;
}
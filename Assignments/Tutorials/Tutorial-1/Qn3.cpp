// C++ program that demonstrates the use of friend classes for coordinate conversion

#include<iostream>
#include<cmath>
using namespace std;

class polar;
class cartisan{
    float x;
    float y;
    public:
        cartisan(){
        x=0.0f;
        y=0.0f;
        }

    cartisan(int a, int b):x(a),y(b){}
    ~cartisan(){}
    void setdata(){
        cout<<"Enter value of x :";
        cin>>x;
        cout<<"Enter the value of y :";
        cin>>y;

    }
    void conversion(polar&);

    void displaydata(){
        cout<<"x is :"<<x<<endl;
        cout<<"y is :"<<y<<endl;

    }
    friend class polar;

};
class polar{
    float r;
    float theta;
    public:
    polar(){
        r=0;
        theta=0;
    }
    polar(int a, int b):r(a),theta(b){}
    ~polar(){}
     void setdata(){
        cout<<"Enter value of r :";
        cin>>r;
        cout<<"Enter the value of theta :";
        cin>>theta;

    }
    void conversion(cartisan& p){
        int x=p.x;
        int y=p.y;
        r=sqrt(x*x+y*y);
        theta=atan2(y,x);
    }
    void displaydata(){
        cout<<"r is :"<<r<<endl;
        cout<<"theta is :"<<theta<<endl;
    }
    friend class cartisan;

};

void cartisan::conversion(polar &p) {
    x = p.r * cos(p.theta);
    y = p.r * sin(p.theta);
}

int main(){

    cartisan a;
    polar b;
    a.setdata();
    b.conversion(a);
    b.displaydata();

    b.setdata();
    a.conversion(b);
    a.displaydata();

    return 0;
}
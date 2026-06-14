#include<iostream>
#include<cstring>
using namespace std;

class number{
    int x,y;
    public:
     number(){
        x=0;
        y=0;
    }
    number(int a,int b):x(a),y(b){}
   
    ~number(){}
    void display(){
        cout<<"x: "<<x<<" y: "<<y<<endl;
    }
    void getdata(){
        cout<<"Enter x and y: ";
        cin>>x>>y;
    }
    number add(number );
};
number number::add(number n){
    int a,b;
    a = this->x + n.x;
    b = this->y + n.y;
    return number(a,b);
}
int main(){
    number n1,n2;
    n1.getdata();
    n2.getdata();
    number n3 = n1.add(n2);
    cout<<"After addition: ";
    n3.display();
    return 0;
}
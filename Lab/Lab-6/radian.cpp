#include<iostream>
using namespace std;

class grade;
class radian{
    float rad;
    public:
    radian(){
        rad=0;
    }
    radian(float a):rad(a){}
    float getrad(){
        return rad;
    }
    void setdata(){
        cout<<"Enter radian :";
        cin>>rad;
    }
    ~radian(){}

};
class grade{
    float grad;
    public:
    grade(){
        grad=0;
    }
    grade(radian& a){
        grad=(200/3.14)*a.getrad();
    }
    ~grade(){}
    void display(){
        cout<<grad<<endl;
    }
};
int main(){
    radian a;
    a.setdata();
    grade b(a);
    b.display();

}


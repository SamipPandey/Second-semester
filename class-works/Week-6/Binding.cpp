//compile time binding
#include<iostream>
using namespace std;
class asian;
class african;
class race{
    public:
    void show(){
        cout<<"human"<<endl;
    }
};
class asian:public race{
    public:
    void show(){
        cout<<"asian"<<endl;
    }
};
class african:public race{
    public:
    void show(){
        cout<<"african"<<endl;
    }
};
int main(){
    race *r=new race;
    r->show();
    r=new asian;
    r->show();
    r=new african;
    r->show();
    return 0;

}
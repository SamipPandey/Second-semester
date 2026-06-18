// wap to overload relational operator to compare the object
// of class Length(meter,centimeter)
#include<iostream>
using namespace std;

class Length{
    int meter;
    int cmeter;
    public:
    Length(){
        meter=0;
        cmeter=0;
    }
    Length(int c, int d):meter(c),cmeter(d){}
    ~Length(){}

    bool operator>(Length a){
        if(this->meter>a.meter||this->cmeter>a.cmeter){
            return true;

        }else{
            return false;
        }

    }
    void getdata(){
        cout<<"\nenter data :";
        cin>>meter>>cmeter;

    }

};

int main(){
    Length l1,l2;
    l1.getdata();
    l2.getdata();
    if(l1>l2){
        cout<<"Greater";
    }else{
        cout<<"Not greater";
    }
    return 0;


}
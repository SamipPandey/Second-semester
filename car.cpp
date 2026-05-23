#include<iostream>
using namespace std;

class car{
    string brand;
    string model;
    public:void setdata(){
        cout<<"*-----------------------*"<<endl;
        cout<<"Enter the model name: ";
        cin>>model;
        cout<<"\n"<<"Enter the brand name: ";
        cin>>brand;
        cout<<"\n"<<"*-----------------------*"<<endl;
    }
    public:void printdata(){
    cout<<endl;
    cout<<"My dream car is "<<model<<" from "<<brand<<endl;
    };
};

int main(){
    car c;
    c.setdata();
    c.printdata();
    
    return 0;
}
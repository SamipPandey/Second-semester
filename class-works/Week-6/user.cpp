// create a class name personal info that store the name and age of a person and create another class id that store nid and citizenship number of person . now derve a class name location that is derrived from two calss defined above 
// 1. only define data member and member function if required 
// 2. all the base and derived class shoud have display function and you are only allowed to use display of derived calss to display the function of base class also create a required settter getter and constructors destructors . and show that base class constructor are called before derived class in constructor and vice versa in destructor 

#include<iostream>
using namespace std;

class Id;
class Location;
class Personal_Info{
    string name;
    int age;
    public:
    Personal_Info(string a=" ",int b=0):name(a),age(b){
          cout<<"Personal_info constructor"<<endl;
    }
    ~Personal_Info(){
        cout<<"Personal_info destructor"<<endl;
    }
    string getname(){
        return name;
    }
    int getage(){
        return age;
    }
    void show(){
        cout<<"Name is :"<<name<<endl;
        cout<<"Age is :"<<age<<endl;
    }
};
class Id{
    long int nid;
    long int citizenship;
    public:
    Id(int a=0, int b=0):nid(a),citizenship(b){
                  cout<<"Id constructor"<<endl;
    }
    ~Id(){
         cout<<"Id destructor"<<endl;
    }
    long int getnid(){
        return nid;
    }
    long int getcitizenship(){
        return citizenship;
    }
    void show(){
        cout<<"NID is :"<<nid<<endl;
        cout<<"Citizenship id is :"<<citizenship<<endl;
    }

};
class location:public Personal_Info,public Id {
    double longitude;
    double latitude;
    public:
    location(string a=" ",int b=0, int c=0, int d=0,double e=0.0,double f=0.0):Personal_Info(a,b),Id(c,d),longitude(e),latitude(f){
                  cout<<"location constructor"<<endl;
    }
    ~location(){
         cout<<"location destructor"<<endl;
    }
    void show(){
        Personal_Info::show();
        Id::show();
        cout<<"Longitude is :"<<longitude<<endl;
        cout<<"Latitude is :"<<latitude<<endl;
    }
    void getdata(){
        Personal_Info::getname();
        Personal_Info::getage();

    }
    
};
int main(){
    class location d("Samip",19,123456789,134776621,10.111166667,1324567.98);
    d.show();

    return 0;
}
#include<iostream>
#include <memory>
using namespace std;
class student{
    private:
        int roll;
        string name;
    public:
        student(){
            roll=0;
            name="NULL";
        }
        student(int r,string n){
            roll=r;
            name=n;
        }
        student(student&);

        ~student(){

        }

        void setdata(int r,string n){
            roll=r;
            name=n;
        }

        void display(){
            cout<<"Roll: "<<roll<<"\tName: "<<name<<endl;
        }

};
student::student(student &s){
    roll=s.roll;
    name=s.name;
}

int main(){
    
    student s(10, "Alice");
    s.display();
    student s2;
    s2=s;
    s2.display();
    return 0;
}

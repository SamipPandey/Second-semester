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

int main(){
    
    unique_ptr<student> s=make_unique<student>(10, "Alice");
    s->display();
}

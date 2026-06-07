#include<iostream>
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
            cout<<"Roll: "<<roll<<"\nName: "<<name<<endl;
        }

};

int main(){
    student s1;
    int roll;
    string name;
    cout<<"Enter roll and name: ";
    cin>>roll>>name;
    s1.setdata(roll,name);
    s1.display();
}
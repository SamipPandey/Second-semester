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
            cout<<"Roll: "<<roll<<"\tName: "<<name<<endl;
        }

};

int main(){
    int roll;
    string name;
    int n;
    cout<<"Enter the number of students: ";
    cin>>n;
    student *x=new student[n];
    for(int i=0;i<n;i++){
        cout<<"Student "<<i+1<<":\n";
    cout<<"Enter name :";
    cin>>name;
    cout<<"Enter roll :";
    cin>>roll;
    x[i].setdata(roll,name);
    }
       for(int i=0;i<n;i++){
    x[i].display();
       }

       delete[] x;
}
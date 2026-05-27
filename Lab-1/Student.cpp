#include<iostream>
using namespace std;

class student_ {
    private:
    string name;
    int age;
    int crn;

    public:
    void setdata(){
    name="hari";
    age=17;
    crn=67;
    }

    void displaydata(){
    cout<<name<<" "<<age<<" "<<crn<<endl;
    }
};

int main(){
    student_ s2; 
    s2.setdata();
    s2.displaydata();
    return 0;
}

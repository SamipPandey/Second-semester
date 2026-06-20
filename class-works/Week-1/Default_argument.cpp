#include<iostream>
using namespace std;

class student{
    public:
    string name;
    int age;

    void showdata();
    void setdata(string="Null",int=0);

};
void student:: showdata(){  //:: -> scope operator
    cout<<name<<endl;
    cout<<age<<endl;
}

void student:: setdata(string name, int age){
    this->name=name;//points to the obeject 
    this->age=age;
}

int main(){
    student s1,s2; // craetaed in stack ; firsst in last out
    s1.setdata("ram",15);
    s1.showdata();
    s2.setdata();
    s2.showdata();

    return 0;
}
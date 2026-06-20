#include<iostream>
using namespace std;

class student{
    public:
    string name;
    int age;

    student(){  // default constructor
        cout<<"this is default constructer"<<endl;
        name="Null";
        age=0;
    }
    student(string name, int age){  // parameterized constructor
        cout<<"this is parametrized constructor"<<endl;
        this->name=name;
        this->age=age;
    }

    void showdata();
    void setdata(string="Null",int=0);

    ~student(){
        cout<<"destructor called"<<endl; //used to destroy the object and free the memory allocated to the object
    }

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
    student s1,s2; // created in stack ; firsst in last out
    {
        student s3;
        cout<<"s3 created"<<endl;
    }
    s1.setdata("ram",15);
    s1.showdata();
    s2.setdata();
    s2.showdata();

    return 0;
}
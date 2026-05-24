#include<iostream>
using namespace std;

class student_ {
    public:
    string name;
    int age;
    int crn;
};

int main(){
    student_ s2; 
    
   s2.name="hari";
   s2.age=15;
   s2.crn=67;
   cout<<s2.name<<" "<<s2.age<<" "<<s2.crn<<endl;
    return 0;
}

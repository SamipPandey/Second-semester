#include<iostream>
using namespace std;
struct student {
    public:
    string name;
    int age;
    int crn;
};

int main(){
    struct student s1;
    s1.name="ram";
    s1.age=12;
    s1.crn=66;
   cout<<s1.name<<" "<<s1.age<<" "<<s1.crn<<endl;
    return 0;
}

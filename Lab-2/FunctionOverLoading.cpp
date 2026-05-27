#include<iostream>
#define Pi 3.14
using namespace std;

//function is determined by the argument passed

void area(float radius){
    cout<<"Area of circle is :"<<Pi*radius*radius<<endl;
}
void area(int length, float breadth){
    cout<<"Area of rectangle is :"<<length*breadth<<endl;
}
// void area(float length, int breadth){
//     cout<<"Area of rectangle is :"<<length*breadth<<endl;
// }
int main(){
    area (2);
    area(2,4.1);
    area(4.1,2);
    return 0;
}
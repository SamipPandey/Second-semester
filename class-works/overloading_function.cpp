#include<iostream>
#define PI 3.12
using namespace std;

void area(int r){
    cout<<"Area of circle is "<<PI*r*r<<endl;
}
void area(int l,int b){
    cout<<"Area of rectangle is "<<l*b<<endl;
}
int main(){
    area(5);
    area(5,10);
    return 0;
}
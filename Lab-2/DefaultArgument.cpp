#include<iostream>
using namespace std;
// The default value should be given from right
// the value replaced in function happens from left
void sum(int a=1, int b=2, int c=3){
    cout<<"Sum is "<<a+b+c<<endl;

}
void sum1(int a, int b=2, int c=3){
    cout<<"Sum is "<<a+b+c<<endl;

}
void sum2(int a, int b, int c=3){
    cout<<"Sum is "<<a+b+c<<endl;

}
int main(){

        sum();
        sum1(2);
        sum2(10,20);
        sum(10,20,30);

}
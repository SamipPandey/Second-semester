#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    float x=1.23456;
    cout<<setw(10)<<x<<endl;
    cout<<setw(20)<<setfill('-')<<x<<endl;
    
    return 0;

}
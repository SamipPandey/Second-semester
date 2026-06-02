//to swap the values  of the variable using pass by reference
#include<iostream>
using namespace std;
void swap(int &a, int &b){
    int temp =a;
    a=b;
    b=temp;
}

int & setvaluex(int &x){
    return x;
}
int & setvaluey(int &y){
    return y;
}

int main(){
    int x,y;
    setvaluex(x)=10;
    setvaluey(y)=20;
    cout<<"before swapping: "<<x<<" "<<y<<endl;
    swap(x,y);
    cout<<"after swapping: "<<x<<" "<<y<<endl;
    return 0;
}
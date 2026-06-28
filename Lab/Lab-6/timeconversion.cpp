#include<iostream>
using namespace std;

class Time{
    int total;

    public:
    Time(int t=0):total(t){}
    Time(int a, int b,int c){
        total = a*3600+ b*60 +c;
    }

    void display(){
        cout<<this->total<<endl;
    }

};
int main(){
    Time t(1,60,3600);
    t.display();
    return 0;

}
#include<iostream>
using namespace std;
class Distance{
    int meter;
    public:
    explicit Distance(int a){
        meter=a;
    }
    friend void printDistance(Distance);



};
void printDistance(Distance d){//implicit constructor called
    cout<<"DIstance :"<<d.meter<<endl;
}
int main(){
    printDistance(Distance(10));
    return 0;
}
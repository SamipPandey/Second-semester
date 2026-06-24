#include<iostream>
using namespace std;

class Date{
    int month;
    int date;

    public:
 
    Date(){
        month=0;
        date=0;
        
    }
    Date(float m){
        month=m*12;
        date=(m*365-month*30);

    }
    ~Date(){}
    void display(){
        cout<<"Months and date are :"<<month<<" "<<date;
    }
    
};
int main(){
    float t= 2.5;
    Date d= t;
    d.display();
    return 0;

}
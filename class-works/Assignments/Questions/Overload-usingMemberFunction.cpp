// overload the uniary decrement operator both post and prefix using friend function and must have return object, 
//nameless object  return and this pointer return
#include<iostream>
using namespace std;

class Time{
    private:
    int hour;
    int minute;
    int second;
    
    void decreaseTime() {
        if (second < 0) {
            minute--;
            second = 59; 
        }
        if (minute < 0) {
            hour--; 
            minute = 59; 
        }
        if (hour < 0) { 
            hour = 0; 
        }
    }

    public:
        Time(){
            hour=0;
            minute=0;
            second=0;
        }
        Time(int h,int m,int s):hour(h),minute(m),second(s){}
        ~Time(){}
        
        void getdata(){
            cout<<"Enter Time in hour minute and second: ";
            cin>>hour>>minute>>second;
        }
        
        void displaydata(){
            cout<<"\nThe Time in hour, minute and seconds are:";
            cout<<hour<<" "<<minute<<" "<<second<<endl;
        }
        
        Time& operator--();   // Prefix
        Time operator--(int);  // Postfix
};

// Prefix using this pointer
Time& Time::operator--(){
    this->second--;
    decreaseTime();
    return *this;
}

// Postfix using temporary object
Time Time::operator--(int){
    Time temp = *this;
    this->second--;
    decreaseTime();
    return temp;
}

int main(){
    Time t1, t2;
    t1.getdata();
    
    cout<<"Original Time:"<<endl;
    t1.displaydata();
    
    cout<<"After Prefix Decrement (--t1):"<<endl;
    --t1;
    t1.displaydata();
    
    cout<<"After Postfix Decrement (t2 = t1--):"<<endl;
    t2 = t1--;
    cout<<"t2 :"<<endl;
    t2.displaydata();
    cout<<"t1 :"<<endl;
    t1.displaydata();
    
    return 0;
}
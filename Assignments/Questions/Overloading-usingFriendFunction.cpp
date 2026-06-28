#include<iostream>
using namespace std;

class Time{
    private:
    int hour;
    int minute;
    int second;
    
    void adjustTime() {
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
        
        friend Time operator--(Time& t);       // Prefix
        friend Time operator--(Time& t, int);  // Postfix
};

// Friend Prefix using Nameless Object
Time operator--(Time& t){
    t.second--;
    t.adjustTime();
    return Time(t.hour, t.minute, t.second);
}

// Friend Postfix using Temporary Object
Time operator--(Time& t, int){
    Time temp(t.hour, t.minute, t.second);
    t.second--;
    t.adjustTime();
    return temp;
}

int main(){
    Time t1, t2;
    t1.getdata();
    
    cout<<"Original Time:"<<endl;
    t1.displaydata();
    
    cout<<"Prefix Decrement (--t1):"<<endl;
    --t1;
    t1.displaydata();
    
    cout<<"Postfix Decrement (t2 = t1--):"<<endl;
    t2 = t1--;
    cout<<"t2 :"<<endl;
    t2.displaydata();
    cout<<"t1 :"<<endl;
    t1.displaydata();
    
    return 0;
}
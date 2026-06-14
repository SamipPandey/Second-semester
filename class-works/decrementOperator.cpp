// overload the uniary decrement operator both post and prefix using friend function and must have return object, 
//nameless object  return and this pointer return


#include<iostream>
using namespace std;

class Time{
    private:
    int hour;
    int minute;
    int second;
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
            cout<<"The Time in hour, minute and seeconds are:"<<endl;
            cout<<hour<<" "<<minute<<" "<<second<<endl;
        }
        void operator--(int){
            this->second--;
            if (this->second<0){
                this->minute--;
                this->second+=60;

            }
            this->minute--;
            if (minute<0){
                this->hour--;
                minute+=60;
            }
            this->hour--;
        }
        Time operator--();
    
};

inline Time Time::operator--(){//prefix operator overloading
    --second;
    --minute;
    --hour;
    return *this;

}
int main(){
    Time t1,t2;
    t1.getdata();
    t1.displaydata();
    cout<<"after decrement"<<endl;
    t1--;
    t1.displaydata();
    t2=--t1;
    t2.displaydata();
    return 0;

}


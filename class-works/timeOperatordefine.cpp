//create a class name Time that represent Time in second minute and hour. oerload the postfix unirary operator
//to implement the object

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
        void operator++(int){
            this->second++;
            if (this->second>60){
                this->minute++;
                this->second-=60;

            }
            this->minute++;
            if (minute>60){
                this->hour++;
                minute-=60;
            }
            this->hour++;
        }
    
};
int main(){
    Time t1;
    t1.getdata();
    t1.displaydata();
    cout<<"after increment"<<endl;
    t1++;
    t1.displaydata();
    return 0;

}


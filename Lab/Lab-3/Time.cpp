#include<iostream>
using namespace std;
class timee{
    private:
    int day;
    int hour;
    int minute;
    int second;
    public:
    timee(){
        day=0;
        hour=0;
        minute=0;
        second=0;
    }
    timee(int d,int h,int m, int s){
        this->day=d;
        this->hour=h;
        this->minute=m;
        this->second=s;
    }
    
    timee add(timee);
    void convert();

    void setdata(int d,int h,int m, int s){
        this->day=d;
        this->hour=h;
        this->minute=m;
        this->second=s;
}
    void showdata(){
        cout<<"Day: "<<day<<endl;
        cout<<"hour : "<<hour<<endl;
        cout<<"minute : "<<minute<<endl;
        cout<<"second : "<<second<<endl;
    }
    ~timee(){
    }
};

timee timee::add(timee t){
        timee temp;
        temp.day=this->day+t.day;
        temp.hour=this->hour+t.hour;
        temp.minute=this->minute+t.minute;
        temp.second=this->second+t.second;
        return temp;

    }

void timee::convert(){
    
    if(this->second>=60){
        this->minute+=this->second/60;
        this->second=this->second%60;
    }
    if(this->minute>=60){
        this->hour+=this->minute/60;
        this->minute=this->minute%60;
    }
    if(this->hour>=24){
        this->day+=this->hour/24;
        this->hour=this->hour%24;
    }

}

int main(){
    timee t1,t2,t3;
    int d,h,m,s;
    cout<<"Enter day, hour, minute and second for time 1: "<<endl;
    cin>>d>>h>>m>>s;
    t1.setdata(d,h,m,s);
    cout<<"Enter day, hour, minute and second for time 2: "<<endl;
    cin>>d>>h>>m>>s;
    t2.setdata(d,h,m,s);
    t3=t1.add(t2);
    t3.convert();
    t3.showdata();
    return 0;
}
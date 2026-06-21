#include<iostream>
using namespace std;

class usd;
class nrp;

class nrp{
    float rupee;
    public:
    nrp(){
        rupee=0;
    }
    nrp(float a): rupee(a){}
    ~nrp(){}

    void setdata(){
        cout<<"Enter money in Nrp :";
        cin>>rupee;
    }

    float getrupee(){
        return rupee;
    }

};

class usd{
    float usdollar;
    public:
    usd(){
        usdollar=0;
    }
    usd(float a): usdollar(a){}
    usd(nrp& ); //destination calss conversion
    ~usd(){}
    

    void displaydata(){
        cout<<"In dollar is :"<<usdollar;
    }
};
 usd::usd(nrp& a){
        usdollar=(float)a.getrupee()/152; 
    }

int main(){
    nrp a;
    usd b=a;
    a.setdata();
    b.displaydata();
    return 0;
}

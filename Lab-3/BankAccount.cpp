//create a class name acc holder (name , acc o, balance) having constructor and destructor
//Diaply and must have settle , deposit, withdraw, transfer , status

#include<iostream>
#include<string>
using namespace std;

class account{
    private:
    int accountnumber;
    string name;
    float balance;
    bool status;

    public:
    account(){
        accountnumber=0;
        name="NULL";
        balance=0.00;
        status = false;
    }

    account(int a, string b, float c,bool d){
        this->accountnumber=a;
        this->name=b;
        this->balance=c;
        this->status=d;
    }

    void setdata(int , string , float, bool);
    void showdata();
    void checkstatus();
    void deposit(int );
    void withdraw(int);

};

void account::deposit(int a){
    this->balance+=a;
}
void account::withdraw(int a){
    this->balance-=a;
}

void account::showdata(){
    cout<<"Name :"<<this->name<<endl;
    cout<<"Account Number :"<<this->accountnumber<<endl;
    cout<<"Balance :"<<this->balance<<endl;
    cout<<"Status :"<<this->status<<endl;
}

void account::checkstatus(){
    cout<<"Status :"<<this->status<<endl;
}

void account::setdata(int accountnumber, string name, float balance,bool status){
    this->accountnumber=accountnumber;
    this->name=name;
    this->balance=balance;
    this->status=status;

}

int main(){
     
    int aa;
    static int count=0;
    string name;
    account a[count];

    cout<<"Welcome to Kec-Bank"<<endl;

    cout<<"======================="<<endl;
    cout<<"press 1 to create an account"<<endl;
    cout<<"press 2 to withdraw money"<<endl;
    cout<<"press 3 to deposit money"<<endl;
    cout<<"press 4 to check status"<<endl;
    cin>>aa;
    if(aa=1){
        account a[count];
        cout<<"Enter your name :"<<endl;
        cin>>name;
        count++;
        a[count].setdata(count, name,0.00,true);
        a[count].showdata();
    }else if(aa=2){
        cout<<"Amount of money to withdraw :";
        float b;
        cin>>b;
        a[count].withdraw(b);
        
        a[count].showdata();

    }else if(aa=3){
        cout<<"Amount of money to deposit :";
        float b;
        cin>>b;
        a[count].withdraw(b);
        
        a[count].showdata();
    }


    return 0;
}
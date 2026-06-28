#include<iostream>//Explain the case of ambuiguity in case of multiple inheritance and how do you resolve it
using namespace std;
class B;
class C;
class A{
    protected: 
    int a;
    public:
    void input(){
        cout<<"Enter value of a :";
        cin>>a;
    }
    void display(){
        cout<<this->a<<endl;
    }
};
class B{
    protected: 
    int a;
    public:
    void input(){
        cout<<"Enter value of a :";
        cin>>a;
    }
    void display(){
        cout<<this->a<<endl;
    }
};
class C:public A,public B{
    int a;
    public:
    void input(){
        A::input();
        B::input();
        cout<<"Enter value of a :";
        cin>>a;

    }
    void display(){
        A::display();
        B::display();
        cout<<this->a<<endl;
    }
    void sum(){
        cout<<"Sum is : ";
        int sum=A::a+B::a+a;
        cout<<sum;
    }
};
int main(){
    C c;
    c.input();
    c.display();
    c.sum();
    return 0;
}

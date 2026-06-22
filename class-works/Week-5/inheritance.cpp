//
#include<iostream>
using namespace std;

class animal{
    public:
    void sound(){
        cout<<"animal sound"<<endl;
    }
};
class dog :public animal{
    public:
    void sound(){
        animal::sound();//if this is not called the only the functions of derived class is called because same function is found in within the scope of derived class
        cout<<"Dog Bark"<<endl;
    }
};

int main(){
    dog d;
    d.sound();
    d.animal::sound();

    return 0;
}
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
        animal::sound();
        cout<<"Dog Bark"<<endl;
    }
};

int main(){
    dog d;
    d.sound();

    return 0;
}
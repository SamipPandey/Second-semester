//create a class box that should represent it length and volume it should have a constructor both deafault and paramaterized to initalize 
//the object and it should have the member static number that should keep track of the number of objects created

#include<iostream>
using namespace std;

class box{
    private: float length;
             float volume;
             static int count;
             
    public:box(){
        length=volume=0;
        count++;
    }
    box(float x):length(x){
        this->volume=length*length*length;
        count++;
    }
    void show(){
        cout<<"length: "<<length<<endl;
        cout<<"volume: "<<volume<<endl;

        
    cout<<"number of objects created: "<<box::count<<endl;
    }
    ~box(){
        cout<<"object destroyed"<<endl;
    }
};

int box::count=0;

int main(){
    box b1(10);
    box b2(20);
    b1.show();
    b2.show();


    return 0;


}
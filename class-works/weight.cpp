//create a class weight that represents weight in kg and gram ; use friend function to add two object 
#include<iostream>
using namespace std;
class weight{
    private:
    int kg;
    int g;
public:
    weight(){
        kg=0;
        g=0;
    }
    weight(int k, int gram){
        this->kg=k;
        this->g=gram;
    }
    ~weight(){
    }
    weight add(weight w);
    void showdata(){
        cout<<"Weight: "<<kg<<" kg "<<g<<" g"<<endl;
    }
};
weight weight::add(weight w){
    weight temp;
    temp.kg=this->kg+w.kg;
    temp.g=this->g+w.g;
    return temp;
}
int main(){
    weight w1,w2,w3;
    int k,g;
    cout<<"Enter kg and gram for weight 1: "<<endl;
    cin>>k>>g;
    w1=weight(k,g);
    cout<<"Enter kg and gram for weight 2: "<<endl;
    cin>>k>>g;
    w2=weight(k,g);
    w3=w1.add(w2);
    w3.showdata();
    return 0;
}
  
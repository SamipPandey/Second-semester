//create a class name weight that represent wt in kg and gram also
//create another class name price that represeent price in rupees
//create a friend function that is friend on both class and determine the price

#include<iostream>
using namespace std;
class weight;
class price;


class price{
    const float rate = 1000;
    float total;
    public:
    void display(){
        cout<<"Price: "<<total<<" rupees"<<endl;
    }
    void convert(weight w);

};

class weight{
    private:
    float kg;
    float gram;

    public:
    weight(){
        kg=0;
        gram=0;
    }
    weight(float k,float g):kg(k),gram(g){}//initialization list
    ~weight(){}
    void getdata(){
        cout<<"Enter weight in kg and gram: ";
        cin>>kg>>gram;
    }
    void display(){
        cout<<"Weight: "<<kg<<" kg "<<gram<<" g"<<endl;
    }
    friend void price::convert(weight w);
};




void price::convert(weight w ){
    float total_kg = w.kg + w.gram/1000;
    this->total = total_kg * this->rate;
    this->display();
}


int main(){
    weight w;
    price p;

    
    w.getdata();
    p.convert(w);

    return 0;
}
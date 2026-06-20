//create a class name weight that represent wt in kg and gram also
//create another class name price that represeent price in rupees
//create a friend function that is friend on both class and determine the price

#include<iostream>
using namespace std;
class weight;
class price;

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
    friend void convert(weight &,price &);
};


class price{
    const float rate = 1000;
    float total;
    public:
    void display(){
        cout<<"Price: "<<total<<" rupees"<<endl;
    }
    friend void convert(weight &,price &);
};


void convert(weight &w, price &p){
    float rate=1000;
    float total=0;
    float totalweight=w.kg+float(w.gram/1000);
    total=totalweight*p.rate;
    p.total=total;
}


int main(){
    weight w;
    price p;

    
    w.getdata();
    convert(w,p);

    p.display();

    return 0;
}
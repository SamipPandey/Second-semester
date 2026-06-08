//write a friend function that adds two function

//create a class name distance that represent distance in feet and inch ; it dhoulf hsvr all the regular class properties including a member function thats add to object
#include<iostream>
using namespace std;

class dist{
    private:
    int feet;
    int inch;

    public:
    dist(){
        feet=0;
        inch=0;
    }

    dist(int f, int i){
        this->feet=f;
        this->inch=i;
    }
    ~dist(){}

    dist add(dist);

    friend dist add(dist d1, dist d2);

    void showdata(){
        cout<<"distance is:"<<endl;
        cout<<feet<<" feet "<<inch<<" inch"<<endl;
    }

    int getfeet(){
        return feet;

    }

    int getinch(){
        return inch;
    }


};
//with friend function

dist add(dist d1, dist d2){
    int ft,in; 
    ft=d1.getfeet()+d2.getfeet();
    in=d1.getinch()+d2.getinch();
    return dist(ft,in);
}
// without friend function
dist dist::add(dist d){
    dist temp;
    temp.feet=this->feet+d.feet;
    temp.inch=this->inch+d.inch;
    return temp;
}

int main(){
    dist d1,d2,d3;
    int f,i;
    cout<<"Enter the distance in feet and inch for distance 1 :";
    cin>>f>>i;
    d1=dist(f,i);
    cout<<"\nEnter the distance in feet and inch for distance 2 :";
    cin>>f>>i;
    d2=dist(f,i);
    d3=d1.add(d2);
    d3.showdata();

    return 0;


}

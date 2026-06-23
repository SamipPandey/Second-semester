//consider two clases one represting first name another representing last name now use a bridge function that dynamically concatinate first name and lastname of two classes .

#include<iostream>
#include<string>
using namespace std;

class Lastname;

class Firstname{
    string fname;
    public:
    Firstname(){
        fname="NULL";
    }
    Firstname(string name):fname(name){}
    ~Firstname(){}
    void setdata(){
        cout<<"Enter your first name :";
        cin>>fname;
    }
    friend  string join(const Firstname&,const Lastname& );
};

class Lastname{
    string lname;
    public:
    Lastname(){
        lname="NULL";
    }
    Lastname(string name):lname(name){}
    ~Lastname(){}
    void setdata(){
        cout<<"Enter your Last name :";
        cin>>lname;
    }
    friend string join(const Firstname&,const Lastname& );

};


string join(const Firstname& f,const Lastname& l){
    string final= f.fname+" "+l.lname;
    return final;
}


void displaydata(string a){
    cout<<"Your name is :"<<a<<endl;
}
int main(){
    Firstname f;
    Lastname l;
    f.setdata();
    l.setdata();
    string a=join(f,l);
    displaydata(a);

}

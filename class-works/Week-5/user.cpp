//create a class name user that should store name and uuid; use dynamic constructor to initialize an object

#include<iostream>
#include<string.h>
using namespace std;

class user {
    char* name;
    int uuid;
    static int count;
public:
    user() {
        name = new char[5]; 
        strcpy(name, "Null");
        uuid = ++count;
    }
    
    user(const char* a) {
        int len = strlen(a);
        name = new char[len + 1]; 
        strcpy(name, a);
        uuid = ++count;
    }
    
    ~user() {
        delete[] name; 
    }
    
    void show() {
        cout << "Name is: " << name << "\nUUID is: " << uuid << endl;
    }
};
int user::count=0;

int main() {
    user a("Samip");
    user b("Senjan");
    user c("Swornim");
    user d("Prashant");
    a.show();
    b.show();
    c.show();
    d.show();
    return 0;
}

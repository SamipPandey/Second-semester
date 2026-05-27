#include<iostream>
using namespace std;

inline int compare(int a , int b){
    int t= (a>b)?a:b;
    return t;
}
int compareI(int a , int b){
    int t= (a>b)?a:b;
    return t;
}
int main(){
    int p=compare(2,3);
    cout<<p<<endl;
    int q=compareI(2,3);
    cout<<q<<endl;
    return 0;
}
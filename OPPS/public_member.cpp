#include<iostream>
using namespace std;

class X{
public:
    int a;
    int sqr(int a){
        return a*a;
    }
};

X obj;      //object created of type X.

int main(){

    int b;
    obj.a = 10;         //vaild. Public member can be used in any function
    b = obj.sqr(15);    //vaild. A public member function can be invoked from any function
    cout<<b<<endl;
    return 0;

}

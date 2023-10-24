/*Program to show working of virtual base class*/

#include<iostream>
using namespace std;
class A
{
public:
    int a;
};

class B:virtual public A    // B inherits Base as virtual
{
public:
    int b;
};

class C: virtual public A   //this time, there is only one copy of Base
{
public:
    int c;
};
class D: public B, public C
{
public:
    int total;
};

int main(){
    D obj;
    obj.a = 25;
    obj.b = 50;
    obj.c = 75;
    obj.total = obj.a+obj.b+obj.c;
    cout<<obj.a<<"+"<<obj.b<<"+"<<obj.c<<"="<<obj.total<<endl;
    return 0;

}

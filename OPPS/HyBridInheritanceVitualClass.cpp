#include<iostream>
using namespace std;
class A{
    public:
    void funA(){
        cout<<"Class A function\n";
    }
};
class B:public virtual A{
    public:
    void virtual funB(){
        cout<<"Class B function\n";
    }
};
class C:public virtual A{
    public:
    void funC(){
        cout<<"Class C function\n";
    }
};
class D : public B,public C{
    public:
    void funD(){
        cout<<"Class D function\n";
    }
};

int main(){
    D obj;
    B obj2;
    obj.funD();
    obj.funA();
    obj2.funA();

}

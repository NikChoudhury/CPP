#include<iostream>
#include<stdio.h>
using namespace std;
class X
{
    int a,b;
    void count(){
        a++;
    }
    public:
        int x;
        void init(int, int, int);
        void print(void);
};
void X::init(int i, int j, int k)
{
    a = i;
    b = j;
    x = k;
}
void X::print(void)
{
    count();
    cout<<"a="<<a<<"b="
    <<b <<"x="<<x<<"\n";
}

void func(void);
    X Ob1;
int main()
{
    X Ob2;
    Ob1.init(0,1,2);
    Ob2.init(2,3,4);
    Ob1.print();
    Ob2.print();
    //Ob1.count();  //count() is a private Member function
    //Ob2.count();  //count () is a private Member function
}

void func(void)
{
    X Ob3;
    Ob1.init(4,5,6);
    //Ob2.init(7,8,9); //Ob2 is Local Object of main()
    Ob3.init(9,10,11);
    //Ob3.a = Ob3.b = Ob3.x; // a and b are private data member
    //Ob1.count(); //count() is a private Member function
    //Ob2.count(); //count() is a private Member function
    //Ob3.count(); //count() is a private Member function
    Ob1.print();
    //Ob2.print();  //Ob2 is Local Object of main()
    Ob3.print();
}

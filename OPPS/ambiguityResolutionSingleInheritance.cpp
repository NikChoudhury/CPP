#include<iostream>
using namespace std;
class A{
public:
    void display(){
        cout<<"Class A \n";
    }
};

class B : public A{
public:
    void display(){
        cout<<"Class B \n";
    }
};

int main()
{
    B b;
    b.display();  //invokes display() in B
    b.A::display(); //invokes display() in A
    b.B::display(); //invokes display() in B
}
/*
This will produce the following output_

B
A
B

*/

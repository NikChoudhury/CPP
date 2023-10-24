/*
    Occasionally, we may face a problem in using the multiple inheritance,
    when a function with the same name appears in more than one base class.
    Consider the following two classes.
*/

#include<iostream>
using namespace std;
class M{
public:
    void display(){
        cout<<"Class M \n";
    }
};

class N{
public:
    void display(){
        cout<<"Class N \n";
    }
};
/*
    Which display() function is used by the derived class when we
    inherit these two classes? We can solve this problem by defining a
    named instance within the derived class, using class resolution operator
    with the funtion as shown below:

*/
class P : public M, public N{
    public:
    void display(){     //overrides display() of M and N
        M::display();
    }
};

// We can now used the derived class as follows
int main(){
    P p;
    p.display();
}

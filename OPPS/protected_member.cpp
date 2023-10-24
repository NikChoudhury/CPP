#include<iostream>
using namespace std;

class BaseClass {
  protected:
    int a;
    int sqr(int a){
        return a*a;
    }
  public :
    int twice(int i){
        return 2*i;
    }
};

class DerivedClass : public BaseClass {
  public:
    int tsq(int i){
        int p = sqr(i);
        int q = twice(p);
        return q;
    }
};

BaseClass obj1;
DerivedClass obj2;

int main() {

    //obj1.sqr(5);  //Wrong! sqr() is a procted member funtion
    cout<<obj1.twice(6); //vaild twice is public member function

    cout<<obj2.tsq(4);   //valid the function tsq() automatically invoke sqr(),
                        // twice() function. sqr() being a protected function can
                        // only be invoked by other member functions of that class and that the Derive ---tsq()

    return 0;
}

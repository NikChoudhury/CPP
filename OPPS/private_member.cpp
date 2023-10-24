#include<iostream>
using namespace std;

class X {
    private:
        int a;
        int sqr(int a){
            return a*a;
        }
    public:
        int b;
        int twice(int i){
            return 2*i;
        }
        int tsq(int i){
            int p = sqr(i); //Private function being invoked by a member function
            int q = twice(p);
            return q;
        }

};

X Obj;

int main(){

    Obj.b = 5;      //valid. 'b' is a public member
    cout<<Obj.b<<endl;
    //Obj.a = 2;      //wrong! 'a' is a private member and hence can be
                    //accessed only by other member function of the sam class

    cout<<Obj.twice(10)<<endl;   //valid.twice() is a public member function.
    //Obj.sqr(5);     //wrong! sqr() is a private member funtion and hence can be
                    //accessed only by other member function of the sam class

    cout<<Obj.tsq(20); //valid the function tsq() automatically invoke sqr(),
                        // twice() function. sqr() being a private function can
                        // only be invoked by other member functions that is twice() and tsq()
    return 0;
}

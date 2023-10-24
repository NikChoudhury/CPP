#include<iostream>
using namespace std;
class AAA
{
        int H;
    protected:
        int S;
    public:
        void INPUT(void);
        void OUT(){
            cout <<"Out";
        }
};
class BBB : private AAA
{
        int T;
    protected :
        int U;
    public:
        void INDATA(int, int);
        void OUTDATA();
};
class CCC : public BBB
{
        int M;
    public:
        void DISP(){
            M = 10;
            U = 20;
            //T = 30;
            //S = 40;
            //H = 40;

        };
};
int main(){
    CCC c;
    BBB b;
    b.OUT();
    return 0;
}

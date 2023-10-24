#include<iostream>
using namespace std;
class Sample{
    private:
        int a, b;
    public:
        Sample(){       //Default constructor
            a = 10;
            b = 20;
            cout << "Default constructor called" <<endl;
        }
        Sample(int x, int y){   //Parameterized Constructor
            a = x;
            b = y;
            cout << "Parameterized constructor called" <<endl;
        }
        Sample(Sample &old){    //Copy Constructor
            a = old.a;
            b = old.b;
            cout << "Copy constructor called" <<endl;
        }
        void showData(){
            cout<<"a ="<<a<<endl;
            cout<<"b ="<<b<<endl;
        }
};

int main(){

    Sample S1;
    Sample S2(60,40);
    Sample S3(S1);
    S1.showData();  //a = 10    b = 20
    S2.showData();  //a = 60    b = 40
    S3.showData();  //a = 10    b = 20
    return 0;
}

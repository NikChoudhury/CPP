//Constructor Overloading
#include<iostream>
using namespace std;
class Sample{
    private:
        int value;
    public:
        //Default constructor
        Sample(){
            value = 0;
            cout << "Value = "<<value<<endl;
        }
        // Parameterized constructor with one integer argument
        Sample(int val){
            value = val;
            cout << "Value = "<<value<<endl;
        }
        // Parameterized constructor with two integer argument
        Sample(int val1, int val2){
            value = val1+val2;
            cout << "Value = "<<value<<endl;
        }
};
int main(){
    Sample Obj1;        //Value = 0
    Sample Obj2(5);     //Value = 5
    Sample Obj3(6,10);  //Value = 16
    return 0;
}

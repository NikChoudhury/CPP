#include<iostream>
using namespace std;
class Sample{
    private:
        int a,b;
    public:
        Sample(int x, int y){
            a = x;
            b = y;
        }
        void Show(){
            cout<<"a = "<<a<<endl;
            cout<<"b = "<<b<<endl;
        }
};
int main(){
    Sample(20,30).Show();
}

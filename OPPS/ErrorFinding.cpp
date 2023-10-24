#include<iostream>
#include<stdio.h>
#include<string>
using namespace std;
class Bus
{
    long BusNo;
    std::string Description[30];
  public:
    void Entry(std::string& des)
    {
        cin>>BusNo;
        Description = des;
        //gets(Description);
    }
    void Show()
    {
        cout<<BusNo<<":"<<Description<<endl;
    }
};
int main()
{
    Bus B;
    std::string Des;
    cin>>Des;
    B.Entry(Des);
    B.Show();
    return 0;
}

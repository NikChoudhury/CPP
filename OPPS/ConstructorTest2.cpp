#include<iostream>
#include<stdio.h>
using namespace std;
class MyStudent
{
    int StudentId;
    char Name[25];
   public :
    MyStudent(){
        StudentId = 101;
    }
    void Register()
    {
        cin>>StudentId;
        cin.ignore(); // Ignore the newline character
        gets(Name);
    }
    void Display()
    {
        cout<<StudentId<<":"<<Name<<endl;
    }
};
int main()
{
    MyStudent MS;
    MS.Register();
    MS.Display();
}


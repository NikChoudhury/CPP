/*
    Pointer is a special variable that holds
    the memory address of another variable of same type.
*/

#include <iostream>
using namespace std;

int main()
{
    int a = 15;
    int *ptr = &a;
    cout<<"Value of a is :"<<a<<endl;
    cout<<"Value by pointer is :"<<*ptr<<endl;
    cout<<"Value of pointer is :"<<ptr<<endl;
    //using pointer
    cout<<"Address of a is :" <<ptr<<endl;
    //using & address operator
    cout<<"Address of a is :" <<&a<<endl;
    cout<<"Address of pointer (ptr) is :" <<&ptr<<endl;
    return 0;
}

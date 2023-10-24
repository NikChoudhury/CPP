#include<iostream>
using namespace std;
void Jumpto(int N1, int N2=20);
int main(){
    int First = 10, Second = 20;
    Jumpto(First,Second);
    Jumpto(First);
    return 0;
}
void Jumpto(int N1, int N2)
{
    N1 = N1+N2;
    cout<<N1<<" "<<N2;
}


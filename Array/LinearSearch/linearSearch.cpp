/*
    Linear Search of an array
*/

#include<iostream>
#include<stdlib.h>
using namespace std;

int main()
{
    int arr[6] = {1,5,3,60,25,26};
    int num;
    cout<<"Enter the number you want to search :";
    cin>>num;
    for(int i=0; i<6; i++)
    {
        if(num==arr[i])
        {
            cout<<"Founded at location "<<i+1;
            exit(1);
        }
    }
    cout<<"Sorry! No Such element in the array \n";
    return 0;
}

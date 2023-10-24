#include<iostream>
using namespace std;
int main()
{
    int arr[10] = {2,8,15,4,1,3};
    int pos, element;
    cout<<"Old array : \n";
    for(int i = 0; i<5;i++)
    {
        cout<<arr[i]<<"  ";
    }
    cout<<"\nEnter the element you want to insert :";
    cin>>element;
    cout<<"Enter the position of the new inserted element :";
    cin>>pos;
    pos = pos -1;
    for(int i = 5; i>=pos; i--)
    {
        arr[i+1]=arr[i];
    }
    arr[pos] = element;


    cout<<"\nNew array : \n";
    for(int i = 0; i<=5;i++)
    {
        cout<<arr[i]<<"  ";
    }

    return 0;
}

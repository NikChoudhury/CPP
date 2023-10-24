#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;

//linear Search
int LSearch(int arr[],int element)
{
    for(int i=0; i<5; i++)
    {
        if(element==arr[i])
        {
            return i;
            break;
        }
    }
    return -1;
}

int main()
{
    int arr[5] = {100,18,26,7,55};
    int element, pos;
    cout<<"Enter the element you want to delete :";
    cin>>element;

    pos = LSearch(arr,element);
    if(pos!= -1){
        for(int i = pos; i<5;i++)
        {
            arr[i]=arr[i+1];
        }
    }else
    {
        cout<<"Sorry! No Such element in the array \n";
        exit(1);
    }

    cout<<"New array after deletion:\n";
    for(int i=0;i<4;i++)
    {
        cout<<arr[i]<<"  ";
    }

    return 0;
}

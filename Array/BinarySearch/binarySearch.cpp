/*
    Binary Search of a sorted array
*/

#include<iostream>
using namespace std;

int main()
{
    const int SIZE = 7;
    int arr[7] = {1,3,25,33,60,80,105};
    int S = 0, E = SIZE - 1, Mid = (S+E)/2;
    int num;
    cout<<"Enter the number you want to search :";
    cin>>num;
    while(S<=E)
    {

        if(arr[Mid]==num)
        {
            cout<<"Founded at location "<<Mid+1;
            break;
        }
        else if(arr[Mid]<num)
        {
            S = Mid+1;
        }
        else
        {
            E = Mid -1;
        }
        Mid = (S+E)/2;

    }
    return 0;
}


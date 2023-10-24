#include<iostream>
#include<stdlib.h>
#include<stdio.h>
using namespace std;

char hel[20];

void something(char *str) {

    hel = *str;
    cout <<hel;

}

int main(int argc, char **argv) {
    char somestring[] = "Hell World!\n";

    something(somestring);

    return 0;
}

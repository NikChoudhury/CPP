/*
    Write/create a file using
    object method
*/

#include<iostream>
#include<fstream>
using namespace std;
int main(){

    ofstream write_file("first_file.txt",ios::out);
    write_file<<"Hello World\n";
    write_file<<"This is my first file"<<endl;
    write_file<<"creating with C";
    write_file.close();
    return 0;
}

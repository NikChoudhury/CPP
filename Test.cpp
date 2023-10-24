/*
Consider the following declaration and answer the question given below :
class

*/
#include<iostream>
using namespace std;
class vehicle
{
    private:
    int wheels;
    protected:
    int passenger;
    //public:
    //void inputdata(int, int);
    //void outputdata();
};
class heavy_vehicle : protected vehicle
{
    int disel_petrol;
    protected:
        int load;
    //public:
        //void readdata(int, int);
        //void writedata();
};
class bus : protected heavy_vehicle
{
    char  make[20];
    public:
        void fetchdata(char);
        void displaydata(){
            wheels = 10;
            passenger = 20;

            load = 10;

        }
};

int main(){
    bus b;

    return 0;
}

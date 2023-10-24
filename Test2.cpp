#include<iostream>
using namespace std;
class AUTHOR
{
        char aname[30], int aid;
    public:
        void read();
        void show();
};
class PUBLISHER : public AUTHOR
{
    protected:
        char pname[30];
    public:
        void getpublisher();
        void disppublisher();

};
class BOOK : public PUBLISHER
{
        int bookcode;
        char bname[30];
    public:
        void getbook();
        void disbook();

};

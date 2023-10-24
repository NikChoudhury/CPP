#include <iostream>
using namespace std;
class Room
{
    private:
        int length;
        int width;
    public:
        Room()
        {
            length=0;
            width=0;
        }
        Room(int value)
        {
            length = width = value;
        }
        void display ( )
        {
            cout<<length <<" "<<width;
		}
};

int main()
{
	Room objRoom1= Room(5);
	objRoom1.display();
	return 0;
}


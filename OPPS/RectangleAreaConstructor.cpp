//a C++ program that calculates and prints the area of a rectangle using a constructor:
#include <iostream>
using namespace std;
class Rectangle {
 private:
    float length;
    float breadth;
    float area;

 public:
    Rectangle(float len, float brd) {
        length = len;
        breadth = brd;
        area = length * breadth;
    }

    void displayArea() {
        cout << "Area of rectangle with length " << length << " and breadth " << breadth << " is: " << area << endl;
    }
};

int main() {
    float length, breadth;

    cout << "Enter length: ";
    cin >> length;
    cout << "Enter breadth: ";
    cin >> breadth;

    Rectangle rect(length, breadth);  // Object created with length and breadth as arguments
    rect.displayArea();

    return 0;
}


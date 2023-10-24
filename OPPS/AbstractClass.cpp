#include <iostream>
using namespace std;
// Abstract class
class Shape {
public:
    virtual void calculateArea() = 0;  // Pure virtual function

    void display() {
        cout << "Displaying shape." << endl;
    }
};

// Derived class 1
class Circle : public Shape {
public:
    void calculateArea() {
        cout << "Calculating area of circle." << endl;
    }
};

// Derived class 2
class Rectangle : public Shape {
public:
    void calculateArea() {
        cout << "Calculating area of rectangle." << endl;
    }
};

int main() {
    // Shape shape;  // Cannot instantiate an abstract class
    Circle circle;
    circle.display();
    circle.calculateArea();

    Rectangle rectangle;
    rectangle.display();
    rectangle.calculateArea();

    return 0;
}


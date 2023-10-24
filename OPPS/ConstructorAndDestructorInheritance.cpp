#include <iostream>

// Base class
class Base {
public:
    Base() {
        std::cout << "Base constructor" << std::endl;
    }

    ~Base() {
        std::cout << "Base destructor" << std::endl;
    }
};

// Derived class
class Derived1 : public Base {
public:
    Derived1() {
        std::cout << "Derived1 constructor" << std::endl;
    }

    ~Derived1() {
        std::cout << "Derived1 destructor" << std::endl;
    }
};

// Derived class 2
class Derived2 : public Derived1 {
public:
    Derived2() {
        std::cout << "Derived2 constructor" << std::endl;
    }

    ~Derived2() {
        std::cout << "Derived2 destructor" << std::endl;
    }
};

int main() {
    Derived2 derivedObj;
    return 0;
}


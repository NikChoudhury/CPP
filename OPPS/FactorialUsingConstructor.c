//Write a program in C++ to print the factorial of a given number using constructor.
#include <iostream>

class Factorial {
private:
    int number;
    long long result;

public:
    Factorial(int num) {
        number = num;
        result = 1;

        // Calculate factorial
        for (int i = 1; i <= number; i++) {
            result *= i;
        }
    }

    void displayResult() {
        std::cout << "Factorial of " << number << " is: " << result << std::endl;
    }
};

int main() {
    int num;
    std::cout << "Enter a number: ";
    std::cin >> num;

    Factorial obj(num); // Object created with number as argument
    obj.displayResult();

    return 0;
}

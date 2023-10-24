//Write a program in C++ to print the factorial of a given number using constructor.
#include <iostream>
using namespace std;
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
            result = result*i;
        }
    }
    void displayResult() {
        cout << "Factorial of " << number << " is: " << result << endl;
    }
};

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    Factorial obj(num); // Object created with number as argument
    obj.displayResult();

    return 0;
}

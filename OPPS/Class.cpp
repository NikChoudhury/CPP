#include <iostream>
#include <string>
using namespace std;

class Candidate {
private:
    long RNO;
    float Score;
    string Name;
    string Remarks;

public:
    void AssignRem() {
        if (Score >= 50) {
            Remarks = "Selected";
        } else {
            Remarks = "Not selected";
        }
    }

    void ENTER() {
        cout << "Enter Registration Number: ";
        cin >> RNO;
        cout << "Enter Name: ";
        cin.ignore();
        getline(cin, Name);
        cout << "Enter Score: ";
        cin >> Score;

        AssignRem(); // Call AssignRem() to assign remarks based on the score
    }

    void DISPLAY() {
        cout << "Registration Number: " << RNO <<endl;
        cout << "Name: " << Name << endl;
        cout << "Score: " << Score << endl;
        cout << "Remarks: " << Remarks << endl;
    }
};
int main() {
    Candidate candidate;
    candidate.ENTER();
    candidate.DISPLAY();
    getch();
    return 0;
}


#include <iostream>
using namespace std;

class Student {
private:
    int rollNo;          // Hidden data (information hiding)
    float marks;

public:
    // Parameterized constructor
    Student(int r, float m) {
        rollNo = r;
        marks = m;
    }

    // Abstraction: shows only essential functionality
    void displayInfo() {
        cout << "Roll No: " << rollNo << endl;
        cout << "Marks: " << marks << endl;
    }
};

int main() {
    Student s1(101, 89.5);
    s1.displayInfo();   // User sees only what is needed (abstraction)

    // s1.rollNo = 999; // ❌ Not allowed (information hiding)
    return 0;
}

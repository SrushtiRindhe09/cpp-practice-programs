// Write a program to create a student class with data members Rollno, Name,totalMarks using parameterized constructor and destructor.

#include <iostream>
using namespace std;

class student
{
    public:
    int rollno;
    string name;
    float totalmarks;
    
    student(int r,string n, float t)
    {
        rollno=r;
        name=n;
        totalmarks=t;
        cout << "constructor is called! Student object is created \n";
    }

      void display()
      {
          cout << "\n--- Student Details ---" << endl;
        cout << "Roll No: " << rollno << endl;
        cout << "Name: " << name << endl;
        cout << "Total Marks: " << totalmarks << endl;
      }
      ~student()
      {
          cout << "Desctuctor is called, object is destroyed! \n";
      }
};

int main() {
    student s(83, "Srushti", 91.38);
    s.display();
   
    return 0;
}
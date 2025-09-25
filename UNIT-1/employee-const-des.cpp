/* Write a program in C++ to create a class Employee with data member’s EmployeeId, Designation, Name, Salary using parameterized constructor and destructor.*/

#include <iostream>
using namespace std;

class Employee 
{
    public:
    int EmployeeId;
    string Designation;
    string Name;
    float  Salary;
    
    Employee(int id,string d, string n, float s)
    {
        EmployeeId=id;
        Designation=d;
        Name=n;
        Salary=s;
        cout << "constructor is called! Student object is created \n";
    }

      void display()
      {
         cout << "\n--- Student Details ---" << endl;
         cout << "EmployeeID: " << EmployeeId << endl;
         cout << "Designation: " <<  Designation << endl;
         cout << "Name: " << Name << endl;
         cout << "Salary: " <<  Salary << endl;
      }
      ~Employee()
      {
          cout << "Desctuctor is called, object is destroyed! \n";
      }
};

int main() {
    Employee em(83, "Srushti", "SWE", 24);
    em.display();
   
    return 0;
}

/*Output:
constructor is called! Student object is created 

--- Student Details ---
EmployeeID: 83
Designation: Srushti
Name: SWE
Salary: 24
Desctuctor is called, object is destroyed! 


*/
#include <iostream>
using namespace std;

class Hello
{
    public:
      Hello()
      {
          cout << "constructor is called, object is created!\n";
      }
      void display()
      {
          cout << "Hello, Welcome to c++ \n";
      }
      ~Hello()
      {
          cout << "Desctuctor is called, object is destroyed!\n";
      }
};

int main() {
    Hello h;
    h.display();
   
    return 0;
}
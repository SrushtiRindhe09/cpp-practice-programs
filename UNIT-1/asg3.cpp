#include <iostream>
using namespace std;

class vehicle
{
  protected:
         string brand;
         string model;
         int year;
  public:       
         vehicle(string b, string m, int y)
         {
           brand = b;
           model = m;
           year = y;
           cout << "constructor is created";
         }
          
         virtual void displayInfo()
         {
           cout << "\nbrand name:" << brand;
           cout << "\nmoddel name:" << model;
           cout << "\nyear:" << year;
         }
         
         ~vehicle()
         {
          cout << "vehicle Destructor is called" << endl;
         } 
};

class car : public vehicle
{
  protected: 
           string fueltype;
           
  public:
          car(string b, string m, int y, string f)
          {
            fueltype = f;
            cout << "car contructor is called" << endl;
            
          }
 
           ~car()
           {
             cout << "car destructor is called" << endl;
           }
                        
           void displayInfo()
         {
           vehicle :: disaplayInfo();
           cout << "\nFueltype:" << fueltype;
         }
};

class bike : public vehicle
{
  private: 
           string enginecapacity;
           
  public:
          bike(string b, string m, int y, string f, string ec)
          {
            enginecapacity = ec;
            cout << "bike contructor is called" << endl;
            
          }
 
           ~bike()
           {
             cout << "bike destructor is called" << endl;
           }
                        
           void displayInfo()
         {
           vehicle :: displayInfo();
           cout << "\nEngineCapacity:" << enginecapacity;
         }
};

class electriccar : public car
{
  private: 
           string batterylife;
           
  public:
          electriccar(string b, string m, int y, string f, string bl)
          {
            batterylife = bl;
            cout << "electric car contructor is called" << endl;
            
          }
 
           ~electriccar()
           {
             cout << "electric car destructor is called" << endl;
           }
                        
           void displayInfo()
         {
           car :: displayInfo();
           cout << "\nbattery life:" << battertylife;
         }
};

int main()
{
  cout << "\n.....car Info....";
  car c1("toyota", "fortuner", 2022, "Diesel");
  c1.displayInfo();

  cout << "\n.....bike Info....";
  bike b1("yamaha", "R15", 2023, "155");
  b1.displayInfo();

  cout << "\n.....electric car Info....";
  electriccar e1("tesla", "model S", 2024, "electric", 20);
  e1.displayInfo();

}

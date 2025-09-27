


#include <iostream>
using namespace std;

class Book
{
 private:
         int bookID;
         string title;
         float price;
         
public:
       Book()
       {
         bookID = 1;
         title = "letuscpp";
         price = 100;
         cout << "Default constructor is called" << endl; 
       }
     
       Book(int id, string t, float p)
       {
         bookID = id;
         title = t;
         price = p;
         cout << "parameterised constructor is called";
       }
       
       void display()
       {
        
        cout << "\nBook ID is:" << bookID;
        cout << "\nBook title is:" << title;
        cout << "\nBook price is:" << price << endl;
       }
        
       ~Book()
       {
       
         cout << "destuctor is called! object is destroyed" << endl;
       }        
       
};
 
 
 int main()
 {
   Book b1;
   b1.display();
   Book b2(2,"data structure",200.0);
   b2.display();
   return 0;   
 }

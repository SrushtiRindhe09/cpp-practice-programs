/* Write a program to find the mean of 2 values of where one value 
belongs to Class A and another value belongs to Class B using the 
concept of Friend Function.*/

#include <iostream>
using namespace std;

class B; 

class A {
private:
    int valueA;
public:
    
    A(int a) {
        valueA = a;
    }
  friend float findMean(A, B);
};

class B {
private:
    int valueB;
public:
    
    B(int b) {
        valueB = b;
    }

   
    friend float findMean(A, B);
};


float findMean(A objA, B objB) {
    return (objA.valueA + objB.valueB) / 2.0;
}

int main() {
   
    A obj1(20);
    B obj2(30);

   
    float mean = findMean(obj1, obj2);

    cout << "Mean of " << 20 << " and " << 30 << " is: " << mean << endl;

    return 0;
}

/*Output:

Mean of 20 and 30 is: 25

*/
#include <iostream>
using namespace std;

class Animal { // Base class
public:
    void eat() {
        cout << "This animal eats food.\n";
    }
};

class Dog : public Animal { // Derived class
public:
    void bark() {
        cout << "The dog barks.\n";
    }
};

int main() {
    Dog myDog;
    myDog.eat();  // Inherited method
    myDog.bark(); // Method of Dog class

    return 0;
}

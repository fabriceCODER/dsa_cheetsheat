#include <iostream>
using namespace std;

class AbstractShape { // Abstract class
public:
    virtual void draw() = 0; // Pure virtual function
};

class Triangle : public AbstractShape {
public:
    void draw() override {
        cout << "Drawing a triangle.\n";
    }
};

int main() {
    AbstractShape* shape = new Triangle();
    shape->draw(); // Calls Triangle's draw method

    delete shape;

    return 0;
}

//
// Created by PC on 12/4/2024.
//

#include "Shape.h"

#include <iostream>
using namespace std;

class Shape {
public:
    virtual void draw() { // Virtual function
        cout << "Drawing a generic shape.\n";
    }
};

class Circle : public Shape {
public:
    void draw() override {
        cout << "Drawing a circle.\n";
    }
};

class Rectangle : public Shape {
public:
    void draw() override {
        cout << "Drawing a rectangle.\n";
    }
};

int main() {
    Shape* shape1 = new Circle();
    Shape* shape2 = new Rectangle();

    shape1->draw(); // Calls Circle's draw
    shape2->draw(); // Calls Rectangle's draw

    delete shape1;
    delete shape2;

    return 0;
}


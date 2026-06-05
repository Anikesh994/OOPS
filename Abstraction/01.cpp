#include <iostream>
using namespace std;

// Abstract Class
class Shape {
public:
    // Pure virtual function → abstraction
    virtual void draw() = 0;
    //classes that inherit this call has to implement pure virtual function

    virtual ~Shape() {}
};

// Derived Class 1
class Circle : public Shape {
public:
    void draw() override {
        cout << "Drawing Circle\n";
    }
};

// Derived Class 2
class Square : public Shape {
public:
    void draw() override {
        cout << "Drawing Square\n";
    }
};

int main() {

    Shape* ptr;

    Circle c;
    Square s;

    // Abstraction + Runtime Polymorphism
    ptr = &c;
    ptr->draw();   // Circle implementation hidden

    ptr = &s;
    ptr->draw();   // Square implementation hidden
    delete ptr;
    return 0;
}
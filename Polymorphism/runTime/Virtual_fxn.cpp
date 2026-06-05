#include <bits/stdc++.h>
using namespace std;

class Animal {
public:
    virtual void sound() {
        cout << "Animal Sound\n";
    }

    // Virtual destructor (IMPORTANT for polymorphism)
    virtual ~Animal() {
        cout << "Animal Destructor\n";
    }
};

class Dog : public Animal {
public:
    void sound() override {
        cout << "Bark\n";
    }

    ~Dog() {
        cout << "Dog Destructor\n";
    }
};

int main() {

    Animal* ptr = new Dog();  // heap allocation

    ptr->sound();             // runtime polymorphism

    delete ptr;               // correct cleanup
}


// Output
// Bark

// Now C++ checks:

// What object is ptr actually pointing to?

// Answer:

// Dog

// So Dog's version is called.
#include <iostream>
using namespace std;

class Animal {
public:
    void sound() {
        cout << "Animal Sound\n";
    }
};

class Dog : public Animal {
public:
    void sound() {
        cout << "Bark\n";
    }
};

int main() {

    Animal* ptr;

    Dog d;

    ptr = &d;

    ptr->sound();
}


// Output
// Animal Sound

// Many beginners expect:
// Bark

// but get:
// Animal Sound


// Look carefully:
// Animal* ptr;
// The pointer type is:
// Animal*
// Even though:
// ptr = &d;
// points to a Dog object.
// The compiler says:
// "I only know this is an Animal pointer, so I'll call Animal's version."
// This is called:
// Early Binding (Static Binding)
// The decision is made during compilation.
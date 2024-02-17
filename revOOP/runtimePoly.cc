#include <iostream>
using namespace std;

class Animal {
public:
    virtual void makeSound() {
        cout << "Some generic sound\n";
    }
};

class Dog : public Animal {
public:
    void makeSound() override {
        cout << "Woof!\n";
    }
};

class Cat : public Animal {
public:
    void makeSound() override {
        cout << "Meow!\n";
    }
};

int main() {
    Animal* ptr;

    Dog myDog;
    Cat myCat;

    // Pointers to the base class can hold objects of derived classes
    // ptr = &myDog;
    ptr->makeSound();  // Calls Dog's makeSound() at runtime
    // myDog.makeSound();    //reallly?

    // ptr = &myCat;
    ptr->makeSound();  // Calls Cat's makeSound() at runtime
    //  myCat.makeSound();    //if its working then why we using ptr here

    return 0;
}

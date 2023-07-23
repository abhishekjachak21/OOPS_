#include <iostream>
using namespace std;

class Animal {
public:
    void speak() {
        cout << "Animal speaks." << endl;
    }
};

class Bird : virtual public Animal {
public:
    // void speak() {
    //     cout << "Bird chirps." << endl;
    // }
    void bir() {
        cout << "Bird chirping." << endl;
    }
};

class Mammal : virtual public Animal {
public:
    // void speak() {
    //     cout << "Mammal makes a sound." << endl;
    // }
    void mam() {
        cout << "mammal chirping." << endl;
    }
};

class Bat : public Bird, public Mammal {
public:
    void batt() {
        cout << "Bat makes a screech." << endl;
    }
};

int main() {
    
    Bat bat;
    bat.bir();
    bat.mam();
    bat.speak(); // Output: Bat makes a screech.

    return 0;
}

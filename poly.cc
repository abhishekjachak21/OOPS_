#include <iostream>
using namespace std;

class Shape {
public:
    virtual void draw() {
        cout << "Drawing a generic shape" << endl;
    }
};

class Circle : public Shape {
public:
    void draw() override {
        cout << "Drawing a circle" << endl;
    }
};

class Square : public Shape {
public:
    void draw() override {
        cout << "Drawing a square" << endl;
    }
};

int main() {
    Circle circle;
    Square square;

    Shape* shape1 = &circle;
    Shape* shape2 = &square;

    shape1->draw();  // Calls draw() of Circle
    shape2->draw();  // Calls draw() of Square

    return 0;
}

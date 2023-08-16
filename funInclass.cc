#include<iostream>
using namespace std;

class Test {
public:

    Test() {
        cout << "fur Called\n";  // Initialize data members
    }

    Test(Test &t) {
        // Copy data members from t
    }

};

Test fun() {
    cout << "fun() Called\n";
    Test t;
    return t;
}

int main() {
    Test t1;         // Create an object t1 using the default constructor
    Test t2 = fun(); // Call fun() which creates an object and returns it, then copy-construct t2 from the returned object
    return 0;
}
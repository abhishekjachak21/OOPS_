#include<iostream>
using namespace std;



class baap {
    int w = 67;

public:
    virtual void display() {
        cout << "Base Class Display: " << w << endl;
    }
};

class beta : public baap {
    int v = 43;

public:
    void display() override {
        cout << "Derived Class Display: " << v << endl;
    }
};

int main() {
    beta bb;
    bb.display();  // Calls the overridden function in the derived class

    // You can also call the base class version explicitly
    bb.baap::display();  // Calls the overridden function in the base class

    return 0;
}




// Q-> so what shud i do to convert that code
//  from fun hiding to fun overriding?

// A-> In the baap class, the display function 
// is declared as 'virtual'...
// In the beta class, the display function 
// is marked with the 'override' keyword 
// to indicate that it is intended 
// to override a virtual function from the base class.


///this is function hiding, and not function overriding 
// class baap {
//     int w = 67;

// public:
//      void display() {
//         cout << "Base Class Display: " << w << endl;
//     }
// };

// class beta : public baap {
//     int v = 43;

// public:
//     void display()  {
//         cout << "Derived Class Display: " << v << endl;
//     }
// };

// int main() {
//     beta bb;
//     bb.display();  // Calls the overridden function in the derived class

//     // You can also call the base class version explicitly
//     bb.baap::display();

//     return 0;
// }









// class baap{
//   int w=67;
//   public:
//     void display(){
//     cout<<"Value: "<<w<<endl;
//    }
// };

// class beta: public baap{
//   int v=43;
//  public:
//    void display(){
//     cout<<"Value: "<<v<<endl;
//    }
// };

// int main(){
//     beta bb;
//     bb.display();

//     return 0;
// }

#include<iostream>
using namespace std;

class Reality{
    private:
     int a;
     void print1(){
        cout<<"Iam Awareness Alone!"<<endl;
    }
    protected:
     int b; 
     void print2(){
        cout<<"Iam self-knowledgable!"<<endl;
    }
    public:
     int c;
    Reality(){
        a=22;
        b=25;
        c=54;
    }
    void print3(){
        cout<<"Iam Best Engineer,i guess!"<<endl;
    }
    void display(){
        cout<<"Value: "<<a
        <<" \nValue: "<<b
        <<" \nValue: "<<c<<endl;
    }

};

class falseness:public Reality{
   int gf=0;
   protected:
    int ok=78;
   public:
    void success(){
        cout<<"Falseness printed!"<<endl;
    } 
};

int main(){
    falseness ff,gg,hh;
    // ff.print1();   //its base private
    // ff.print2();   //its base protected
    ff.print3();      //its base public
    ff.display();     //its base public 
    ff.success();     //its derived public
    
    return 0;
}








///---------------------
// class Reality {
// private:
//     int a;

// protected:
//     int b;

// public:
//     int c;

//     Reality() {
//         a = 22;
//         b = 25;
//         c = 54;
//     }

//     void print1() {
//         cout << "I am Awareness Alone!" << endl;
//     }

//     void print2() {
//         cout << "I am self-knowledgeable!" << endl;
//     }

//     void print3() {
//         cout << "I am the Best Engineer!" << endl;
//     }

//     void display() {
//         cout << "Value: " << a
//              << "\nValue: " << b
//              << "\nValue: " << c << endl;
//     }
// };

// class falseness : public Reality {
// private:
//     int gf = 0;

// protected:
//     int ok = 78;

// public:
//     void success() {
//         cout << "Falseness printed!" << endl;
//     }
// };

// int main() {
//     falseness ff, gg, hh;

//     // Accessing public functions from the base class
//     ff.print1();
//     ff.print2();
//     ff.print3();
//     ff.display();

//     // Accessing public function from the derived class
//     ff.success();

//     return 0;
// }








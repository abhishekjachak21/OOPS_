#include<iostream>
using namespace std;


class baap {
    int w ;

public:
     
     baap(int x){
        w=x;
         cout << "Base Class Display: " << w << endl;
     }
    
     void display1() {
        cout << "Value: " << w-50 << endl;
    }
};

class beta : public baap {
    int v ;

public:
    
    beta(int f,int g):baap(f){   //inheriting constructor ..hehe
        v=g;
        cout << "Derived Class Display: " << v << endl;
    }
   
    void display2()  {
        cout << "Value: " << v-50 << endl;
    }
};


int main() {
    beta bb(98,99);
    bb.display1();  
    bb.display2();  

    return 0;
}



/*
/////----------------------------------------------
class baap {
    int w = 67;

public:
     
     baap(){
        cout<<"baap constructor"<<endl;
     }
    
     void display1() {
        cout << "Base Class Display: " << w << endl;
    }
};

class beta : public baap {
    int v = 43;

public:
    
    beta():baap(){   //inheriting constructor ..hehe
        cout<<"beta constructor"<<endl;
    }
   
    void display2()  {
        cout << "Derived Class Display: " << v << endl;
    }
};


int main() {
    beta bb;
    bb.display1();  
    bb.display2();  

    return 0;
}
*/
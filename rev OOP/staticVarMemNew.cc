#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class adda{
    int a,f;
    static int b;

   public:
   
    adda(){       ///constructor
        f=78;
    }
    void input(int x){
        a=x;
        b=b+1;
    }
    void print(){
        cout<<"A: "<<a
        <<"\nB: "<<b
        <<"\nF: "<<f<<endl;
    }
    static void printStat(){
        cout<< "Static: "<<b<<endl;
    }

};

int adda :: b; //this is necessary line to use static var

int main(){
    adda aa,bb;

    aa.input(1);
    aa.print(); //we can't call static fun using object
     adda :: printStat(); // Correct way to call a static function

    bb.input(4);
    bb.print();
     adda :: printStat(); 

    return 0;

}
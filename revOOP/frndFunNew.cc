#include<iostream>
using namespace std;

class B;  //need to be declared bcz we're using it in class A

class A{
  int a=1,b=4;
 public: 
  friend int val(A aa,B bb);

};

class B{
  int c=3,d=2;
 public:
  friend int val(A aa,B bb) ;

};

int val(A aa,B bb){
    if(aa.a > bb.c)
     cout<<"Greater val: "<< aa.a << endl;
    else 
     cout<<"Greater val: "<< bb.c << endl;

    return 0; 
}

int main(){
   A aa;
   B bb;
   val(aa, bb);

   return 0;
}









////part1
// class A{

//      int a,b;
//    public:  
//      void input();
//      friend int sum(A e1);
// };

// // A :: void input(){} it is wrong bro

// void A :: input(){
//     cout<<"Entr values: ";cin>>a>>b;
// }

// int sum(A e1)
// {
//   return (e1.a+e1.b);
// }

// int main()
//    {
//     A e1;
//     e1.input();
//     cout << "Addition = " << sum(e1) << endl ;
//     return 0;
//    }

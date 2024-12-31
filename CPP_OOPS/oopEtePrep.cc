#include<iostream>
using namespace std ;

class bsdk{
    public:
      int a;
      
    public :

     void accept(){
        
        cout<<"Please Enter you favourite no: ";
        cin>>a;
     }

     void display(){
        cout<<"Value of A: "<<a<<endl;
     }

     bsdk operator+(bsdk bb){
      bsdk cc;
      cc.a = a + bb.a;
      return cc;
       }
};

int main()
{
   bsdk aa,bb,cc;
   aa.accept();
   bb.accept();
    cc=aa+bb;
   aa.display();
   bb.display();
   cc.display();
   
   
   return 0;
}










//FunctionOverlodin
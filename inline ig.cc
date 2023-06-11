
#include<iostream>
using namespace std ;

//inline function bhi hai
// aur fun overloading bhi hai..same name but diff para
// fun 0verriding...same name same para 

class addition {

   public :
   
   inline void sum(int a,int b){
    cout << "a+b =  " << a+b << endl ;;
     }

   inline void sum(int x,int y,float z){
    cout << "x+y+z =  "<< x+y+z << endl ; ;
  }

};

int main(){

    
    addition s ;
    s.sum(5,6);

    s.sum(3,5,7.8) ;
    return 0;

}
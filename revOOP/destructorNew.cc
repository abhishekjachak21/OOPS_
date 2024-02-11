#include<iostream>
using namespace std;

class myPran{
//    static int count=0; //wrong bro,dont declare
   static int count; 
   
   public:
   myPran(){
    count++;
    cout<<"Count created: "<<count<<endl;
   }
   ~myPran(){
    count--;
    cout<<"1 Count destroyed,now count=>"<<count<<endl;
   }

};
int myPran::count;

int main(){
     
    myPran aa,bb,cc;
    {
        myPran dd;
    }
   
    myPran ff;

    return 0;
}
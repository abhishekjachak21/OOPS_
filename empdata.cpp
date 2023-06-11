#include <iostream>  
using namespace std;  

class Employee  
 {  
   public:  int a;
  // Employee()    
  // {    cout<<"Constructor Invoked"<<endl;    }    
  //  ~Employee()    
  // {    cout<<"Destructor Invoked"<<endl;    } 

  void getData(){
     cout<<"Enter: ";cin>>a;
  }
  void setData(){
   cout<< "Value: "<<a<<" "<<endl;}
}emp[10];  
int main()   
{ 
  for(int i=0;i<10;i++)
  {emp[i].getData();}

 return 0;  
}  
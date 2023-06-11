#include<iostream>
#include<fstream>
#include<vector>
using namespace std;

int main()
{
    try{
   char name[10],addr[10];
   vector<int>mob_no;
   int ele;
     cout<<"Enter Name: ";cin>>name;
     cout<<"Enter Address: ";cin>>addr;
     cout<<"Enter Mobile No: ";
     for(int ele=0;ele<10;ele++){
     cin>>ele; 
     mob_no.push_back(ele);}
     
     cout<<"size "<<mob_no.size()<<endl ;
     if(mob_no.size()!=10)
       throw 'N';
     else
        {
         cout<<"\nYourName: "<<name;
         cout<<"\nYourAddress: "<<addr;
         for(int i=0;i<=10;i++)
         cout<<"\nYourMobileNo: "<<mob_no[i]<<" ";
        }
     }
   catch(char n){
    cout<<"Mobile No is Invalid\n"<<n;
   }
    return 0;
}
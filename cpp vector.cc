#include<iostream>
#include<vector>
using namespace std ;



int main(){
   vector<int>vec1 ;
   int element ;
   
   for(int i=0;i<4;i++)
   {
    cout << "Enter the element: " ;
    cin >> element ;
    vec1.push_back(element) ;
   }
   
   for(int i=0;i< vec1.size() ;i++)
   {
   // cout << "Enter the element: " ;
    cout << element ;
    vec1.push_back(element) ;
   }



   return 0 ;



}
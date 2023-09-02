#include<iostream>
#include<fstream>
using namespace std;
/* 
int main(){
    // ofstream newF(home/abhishek/Desktop/);
     ofstream newF("/home/abhishek/Desktop/myfile.txt");

    cout<<"file created";

    newF << "C++ Fullknowledge";
    newF.close();

    return 0;
} */



int main(){
   
  string str;
  ifstream newF("/home/abhishek/Desktop/myfile.txt");

  while(getline(newF,str)){
    cout<<str;
  }
    newF.close();

    return 0;
}
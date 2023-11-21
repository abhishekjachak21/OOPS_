#include<iostream>
#include<fstream>
#include<string>
using namespace std;


// int main()
// {
//       ifstream duffer;
//       string st2;
//       duffer.open("samplfilehandlin.txt");
//       getline(duffer,st2) ;//getline(in,st2);for complete line
//       cout<<"Name of KING:"<<st2<<endl;
//       duffer.close();
//    return 0;
// }


/*getting error that 1stline is not showing*/
int main()
{
    //    //reading from the file
      ifstream inn;
     
      string st2;  //in>>st2;
      inn.open("samplfilehandlin.txt");  //in>>st2 must be below open fun hehe
      // inn>>st2;    ///this helped to solve error.
      // cout <<st2;    ///this helped to solve error.

      while(inn.eof()==0)     //endof or good both best
      {
        getline(inn,st2);
        cout<<st2<<endl ;
      }

    //   cout<<"Name of KING:"<<st2<<endl;
      inn.close();
      
          //    // writing on file
    //   //Connecting file with pgm by gtout stream
      // ofstream gtout("samplfilehandlin.txt"); 
      // string name; 
      // cout<<"Enter your Name: ";getline(cin,name);
      // gtout<<name;  //out,gtout,hout NP
      // //  getline(gtout,name);  //out,gtout,hout NP
      // gtout.close();

    return 0;
}






// int main()
// {
    //    // writing on file
    //   //Connecting file with pgm by gtout stream
      // ofstream gtout("samplfilehandlin.txt"); 
      // string name;
      // cout<<"Enter your Name: ";cin>>name;
      // gtout<<name;  //out,gtout,hout NP
      // gtout.close();

    //    //reading from the file
//       ifstream in("opovrladin.cc");
//       string st2;
//       // in>>st2; 
//       getline(in,st2);   //for complete line
//       cout<<"Name of KING:"<<st2<<endl;
//       in.close();
      

//     return 0;
// }
//closefun used then only, write-read 
//get access simultaneously, ok

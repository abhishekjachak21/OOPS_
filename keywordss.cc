#include<iostream>
using namespace std ;

///---------------------------------------------
#include <string>
  struct myStructure{
    int a=10;string b="RAM";
	 float c=3.7;
	 int d = 25;
  } aa,bb,cc,dd;
  
  int main() {
      
  cout <<  aa.a  << "\n";
  cout << bb.b<< "\n";
  cout << cc.c << "\n";
  cout <<dd.d << "\n";

  return 0;
}
///---------------------------------------------




///---------------------------------------------
// #include <string>
// int main() {
//   struct {
//     int a;string b; float c;int d;
//   } myStructure;

//   myStructure.a = 10;
//   myStructure.b = "Hello World!";
//   myStructure.c = 3.5;
// myStructure.d = 56;

//   cout << myStructure.a << "\n";
//   cout << myStructure.b << "\n";
//   cout << myStructure.c << "\n";
//   cout << myStructure.d << "\n";
//   return 0;
// }
///---------------------------------------------




///---------------------------------------------
// // C++ program to demonstrate static
// // variables inside a class

// #include<iostream>
// using namespace std;

// class GfG
// {
// public:
// 	static int i;
	
// 	GfG()
// 	{
// 		// Do nothing
// 	};
// };

// int GfG::i = 1;

// int main()
// {
// 	GfG obj,obj2;
// 	// prints value of i
// 	cout << obj.i<<" "<<obj2.i<<endl;
// }
///---------------------------------------------
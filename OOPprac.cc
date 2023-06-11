#include<iostream>
using namespace std;








// class stamina{
   
//    int a,b;

//  public:

//    stamina()
//    {
//     a=0;
//     b=0;

//    }
//    stamina(int m,int n)
//    {
//     int a=m;
//     int b=n;
//   //  cout << "Multiply: "<< (a*b) << endl ;
//    }
//    int print()
//    {
//     return (a*b);
//    }
  
// };
// //Okayeh so with this I have Understood that value passed to the
// //constructor is not passed at the function below .....
// int main()
// {
//     stamina s1(4,8),s2(3,5),s3(7,2);
//     s1.print();
//     s2.print();
//     s3.print();
//     return 0;
// }















// class stat{
   
//    int a;
//    int b;
//    static int c;
   
//  public:

//    stat(int m,int n){
//     int a=m;
//     int b=n;
//     c=c+1;
//    }
//    void print()
//    {
//     cout << "Add: "<< (a*b) << endl ;
//     cout <<"uff= "<<c<<endl ;
//    }
//    static void fun(){
//     cout << "Its a static value: "<< c <<endl ;
//    }
// };
// int stat :: c ;
// int main()
// {
//     stat s1(4,8),s2(3,5),s3(7,2);
//     s1.print();
//     s2.print();
//     s3.print();
//     stat :: fun();
//     return 0;
// }





//copy constructor it is or constructor overloading u can say
// class Don{
//     int a,b;
//     public:
//     Don()            //default
//     {
//         a=7;
//     }
//     Don(int n)             //parameterized
//     {
//         a=n;
//     }
//     Don(Don &f)  //f is the address of 1st constr's a...
//     {             //haha..u can take any value at f
//         a=f.a ;
//     }
//     void printdata()
//     {
//         cout << a << endl ;
//     }
// };

// int main()
// {
//     d1,d2(565),d3(d1);
//     d1.printdata();
//     d2.printdata();
//     d3.printdata();
//     return 0;
// }



// //Parameterized Constructor it is
// class paru{
//     int a,b;
//     public:
//     paru(int m,int n)
//     {
//         a=m;
//         b=n;
//     }
//     void accept()
//     {
//         cout << "Multiplication : "<< a*b << endl ;
//     }
// };
// int main()
// {
//     int m,n;
//     cout << "Enter two no: "<<endl ;
//     cin>>m>>n;
//     paru p1(m,n);
//     p1.accept(); //im stuck at how to do thiss for multiple objects
//     return 0;
// }











// //Function Overloading it is
// void mul(int a,int b){
//     cout <<"add: "<< a+b << endl ;
// }

// void mul(int a,float b){
//     cout << "addi: "<<a+b << endl ;
// }

// // void mul(int a,int b,int c){
// //     cout << a+b+c << endl ;
// // }

// int main()
// {
//   mul(2,6);
//   mul(7,4.3);
//  // mul(2,4,9);

//   return 0;

// }

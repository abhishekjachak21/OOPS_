#include<iostream>
// #include<conio>
using namespace std;

class Complex
{
    private:
        int r;
        int i;
    public:
       
        void accept(){ 
        cout<<"Please Enter you favourite no: ";
        cin>>r;
        cin>>i;
            }

        Complex operator + (Complex C2)
        {
            Complex temp;
            temp.r = r - C2.r;
            temp.i = i - C2.i;
            return temp;
        }

        void Display() {
            cout << r << "+i" << i <<endl;
        }

        void ADD() {
            cout<<"Ans: "<< r << "+i" << i <<endl;
        }
};

int main()
{
    // clrscr();
     Complex C1,C2,C3;
    C1.accept();
    C1.Display();
    C2.accept();
    C2.Display();
    C3 = C1+C2;
    C3.ADD();  
    
}





// #include<iostream>
// using namespace std;

// class Complex
// {
//     int a,b;

// public:
    
//     void setdata(int x , int y)
//     {a=x; b=y;}
    
//     void showdata()
//     {cout<<"a: "<<a<<"\nb: "<<b<<endl;}
    
//     Complex operator +(Complex c){
//         Complex temp;
//         temp.a=a+c.a;
//         temp.b=b+c.b;
//         return(temp);
//     }
// };
// int main()
// {

//     Complex c1,c2,c3;
//     c1.setdata(3,4);
//     c2.setdata(5,6);
//     c3=c1+c2 ;
//     c3.showdata();
//     return 0;
// }



//operator overloading c++ by codeitup
// class bsdk{
//     public:
//       int a;
      
//     public :

//      void accept(){
        
//         cout<<"Please Enter you favourite no: ";
//         cin>>a;
//      }

//      void display(){
//         cout<<"Value of A: "<<a<<endl;
//      }

//      bsdk operator+(bsdk bb){
//       bsdk cc;
//       cc.a = a + bb.a;
//       return cc;
//        }
// };

// int main()
// {
//    bsdk aa,bb,cc;
//    aa.accept();
//    bb.accept();
//     cc=aa+bb;
//    aa.display();
//    bb.display();
//    cc.display();
   
   
//    return 0;
// }





























//below is copied from dotnettutorials website..
//it is really goood website birooo

// #include<iostream>
// using namespace std;

// class Complex
// {
//     private:
//         int real;
//         int img;
//     public:
//         Complex (int r = 0, int i = 0)
//         {
//             real = r;
//             img = i;
//         }
//         Complex operator + (Complex x)
//         {
//             Complex temp;
//             temp.real = real + x.real;
//             temp.img = img + x.img;
//             return temp;
//         }
//         void Display() {
//             cout << real << "+i" << img <<endl;
//         }
// };

// int main()
// {
//     Complex C1 (3, 7);
//     C1.Display();
//     Complex C2 (5, 2);
//     C2.Display();
//     Complex C3;
//     C3 = C1+C2;
//     C3.Display();
// }

#include<iostream>
using namespace std;

class A{
    private:
     int a=3,b=6;
    friend int sum(A);
    public:;
   //  friend int sum(A);
};


int sum(A e1)
    {
       return (e1.a+e1.b)  ;
    }

int main()
{
    A e1;
   // e1.sum();
    cout << "Addition= "<<sum(e1)<<endl ;
    return 0;
}


// int sum(A e1)
//     {
//        return (e1.a+e1.b) ;

//     }

// class B{
//     public:
//     void sum()
//     {
//         cout << a+b << endl ;
//     }
// };



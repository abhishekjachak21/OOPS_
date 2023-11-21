#include<iostream>
using namespace std ;

// //FunctionOverlodin
// class Bak{
  
//   public:

//     void add(int x,int u){
//     cout<<"I am agit: "<<x<<" & "<<u<<endl ;
//     }
      
//       void add(double r , int g){
//       cout<<"I am agiit: "<<r<<" & "<<g<<endl ;
//     } 
// };

// int main(){
//   Bak bsdk;
//   bsdk.add(4.5,69);
//   bsdk.add(76,56);
//   // bsdk.add(5);
//   // bsdk.add(35)
//   return 0;
// } 





class mega{
  int a;
  public:
    
    void accept()
    {
        cout << "Enter no:\n";cin>>a;
    }
    void display()
    {
        cout << "A: "<<a<<endl;
    }
    mega operator+(mega m2)
    {
        mega m3;
        m3.a =a + m2.a;
        return m3;
    }
};
int main()
{
    mega m1,m2,m3;
    m1.accept();
    m2.accept();
 //   m3.accept();
    m3=m1+m2;
    m1.display();
    m2.display();
    m3.display();
    return 0;
}
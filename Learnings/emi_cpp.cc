#include <iostream> 
#include <math.h> 

using namespace std ;

class bank
{
  long double e=0.0,p,r=0.0,n,m=0.0,w,x,s,f;
  
public:
   bank(){ };
  
void accept ()
{
  
  cout << "Enter loan details =>  \n";
  cout << "Enter Principal Amount: ";cin >> p;
  cout << "Enter Yearly Rate of interest: ";cin >> r;
  cout << "Enter No. of Years: ";cin >> n;
  s=(n*12);
  w=((r/12)/100) ;
  f=(1+w) ;      
  m= pow(f,s);
}
void display ()
{
   w=((r/12)/100) ;
   s=(n*12);
  e= ((p*w*m)/(m-1));
  x=(e*s);
  //cout << "\nMonthly rate of interest: " << w <<"%"<< endl ;
  cout << "\nYour EMI is ₹" << e <<" for coming "<< s << " months"<<endl;
  cout<<"Total repayble amt: ₹"<< x << endl;
  cout << "Total interest amt: ₹"<< (x-p) << endl;

}
};
 int main()
{
  bank b1;
  b1.accept();
  b1.display();
  return 0;
}
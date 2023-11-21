
#include <iostream> 
using namespace std ;

class Bank_Loan{
  public :
  string name,a;
 int paid_amt,rem_amt ;
  int loan_no,loan_amt,b,c ;
  string loan_typ,d;

public:
   
   Bank_Loan(){
    name= " " ;
    loan_amt = 0;
    loan_no = 0;
    loan_typ = " ";
   }
    Bank_Loan(string a,int b,int c,string d){
    name= a;
    loan_no = b;
    loan_amt = c;
    loan_typ = d;
   }
   Bank_Loan(Bank_Loan &b2)
   {
    name= b2.a;
    loan_no = b2.b;
    loan_amt = b2.c;
    loan_typ = b2.d;
   }


  void accept()
  {

    cout << " \nEnter "
            <<  "Customer Name: " << endl ;
    cin >> name ;
    cout << "Enter Loan no: " << endl ;
    cin >> loan_no ;
    cout << "Enter loan amount: " << endl ;
     cin >> loan_amt ;
    cout << "Enter loan type: " << endl ;
      cin >> loan_typ ;
     cout << "Enter Paid Amount: " ;
      cin >> paid_amt ;
  }

  void display()
  {
     cout << " \nCustomer Name: " << name ;
    cout << " \nLoan no: " << loan_no ;
    cout << " \nInitial loan amount: " <<  loan_amt ;
    cout << " \nloan type: " << loan_typ ;

    rem_amt = loan_amt - paid_amt ;
    cout << " \nStill you're having Rs." << rem_amt 
    << " Amount of loan !!" << "\n" ;
  }
};

int main(){
  Bank_Loan loaner[10];
  int n,i;

  cout << "Enter no. of Loan takers -> ";
  cin>>n;

  for(i=0;i<n;i++)
   loaner[i].accept();
   
   cout << "\n\nYour loan details: \n" ;

  for(i=0;i<n;i++)
   loaner[i].display();

}



#include<iostream>
using namespace std;
class Bank_loan
{
    string customer_name;
    long int loan_number;
    double loan_amount;
    string loan_type;
public:
    Bank_loan()                       //Default Constructor
    {
        customer_name="\0";
        loan_number=0;
        loan_amount=0;
        loan_type="\0";
    }
    Bank_loan(Bank_loan &b)           //Copy Constructor
    {
        customer_name=b.customer_name;
        loan_number=b.loan_number;
        loan_amount=b.loan_amount;
        loan_type=b.loan_type;
    }
    Bank_loan(string a,long int b,double c,string d="Home Loan")        //Default Parameterized Constructor
    {
        customer_name=a;
        loan_number=b;
        loan_amount=c;
        loan_type=d;
    }
    void getdata()
    {
        cout<<"Enter the name of the customer: ";
        cin>>customer_name;
        cout<<"Enter the loan number: ";
        cin>>loan_number;
        cout<<"Enter the loan amount: ";
        cin>>loan_amount;
        cout<<"Enter the loan type: ";
        cin>>loan_type;
    }
    double remaining_amount()
    {
        double rem,amount_paid;
        cout<<"Enter the amount paid by the customer: ";
        cin>>amount_paid;
        rem=loan_amount-amount_paid;
        return rem;
    }
};
int main()
{
    Bank_loan b1,b2(b1),b3("John",19255111,263763.4,"Car Loan");
    double rem_amt1,rem_amt2,rem_amt3;
    b1.getdata();
    b2.getdata();
    b3.getdata();
    rem_amt1=b1.remaining_amount();
    rem_amt2=b2.remaining_amount();
    rem_amt3=b3.remaining_amount();
    cout<<"Remaining amount to be paid by 1st customer: "<<rem_amt1<<endl;
    cout<<"Remaining amount to be paid by 2nd customer: "<<rem_amt2<<endl;
    cout<<"Remaining amount to be paid by 3rd customer: "<<rem_amt3<<endl;
}








































// int main() {
   

//   signed int n,k;
//     signed int kuf=0;
//     cin >> n;
//     cin >> k;
    
    
   
//        for(int i=0;i<n;i++)
//       {
//            int arr[n];
//            cin >> arr[i];
//             kuf = (arr[0]-k) ;
//       }
//       for(int i=0;i<n;i++)
//       { 
//         int arr[n] ;
//         if(kuf > arr[i])
//         {    
//         kuf = arr[i] ;
//         }
//       }
//      cout << kuf << endl ;  
     
    
     
    
//     return 0;
// }










// //  //rahul dilemma question   
// //     int n;
// //     cin >> n;
 
// //     int sus=0;
// //     int arr[n]; 
// //     for(int i=0;i<n;i++)
// //     {
// //         cin >> arr[i];
// //     }
// //      for(int i=0;i<n;i++)
// //     {
// //         sus=sus+arr[i];
// //         cout << sus << " " ;
// //     }

// //     // while(n--){
// //     //  int fk[n];   
// //     // for(int i=0;i<n;i++)
// //     // {
// //     //     cin >> fk[i];
// //     // }
// //     //  for(int i=0;i<n;i++)
// //     // {
// //     //     cout << fk[i-1];
// //     // }
// //     // }
// //     return 0;
// // }

/* 

#include <iostream>
#include <string>
using namespace std;

class SimpleInterest {
protected:  // Change to protected so that subclass can access these members
    int Principal;
    string nameOfCustomer;
    float Rate;
    int Duration;

public:
    SimpleInterest() {}

    SimpleInterest(string a, int b, float c, int d) {
        nameOfCustomer = a;
        Principal = b;
        Rate = c;
        Duration = d;
    }

    void getInfo() {
        cout << "\nEnter Input data ";
        cout << "\nNAME: "; cin >> nameOfCustomer;
        cout << "Principal Amt: "; cin >> Principal;
        cout << "Rate: "; cin >> Rate;
        cout << "Duration(in yrs): "; cin >> Duration;
    }

    void displayInfo() {
        cout << "\nNAME: " << nameOfCustomer;
        cout << "\nPrincipal Amt: " << Principal;
        cout << "\nRate: " << Rate;
        cout << "\nDuration(in yrs): " << Duration;
    }
};

class simpl2 : public SimpleInterest {
    int SI;  // SI should be a member of simpl2, not SimpleInterest
public:
    void simpleI() {
        SI = (Principal * Rate * Duration) / 100;
        cout << "\nSimple Interest is: " << SI << endl;
    }

    void calculateInstmnts() {
        int salary = 0;
        int TotAmt = SI + Principal;
        cout << "\nSalary(in k): "; cin >> salary;
        int intlAmt = salary / 4;
        int futreMnths = TotAmt / intlAmt;
        cout << "You can pay " << intlAmt
             << " per month to complete installments in "
             << futreMnths << " months" << endl;
    }
};

int main() {
    simpl2 si[10];

    for (int i = 0; i < 10; i++) {
        si[i].getInfo();
        si[i].displayInfo();
        si[i].simpleI();
        si[i].calculateInstmnts();
    }

    return 0;
} */


#include<iostream>
using namespace std;

class SimpleInterest{
   protected:

   int Principal;
   string nameOfCustomer;
   float Rate;
   int Duration;  //in yrs
   int SI;

   public:

    SimpleInterest(){}

    SimpleInterest(string a,int b,float c,int d){
    nameOfCustomer=a;
    Principal=b;
    Rate=c;
    Duration=d;
    }

    void getInfo(){
    cout<<"\nEnter Input data ";
    cout<<"\nNAME: ";cin>>nameOfCustomer;
    cout<<"Principal Amt: ";cin>>Principal;
    cout<<"Rate: ";cin>>Rate;
    cout<<"Duration(in yrs): ";cin>>Duration;
    }

    void displayInfo(){
    cout<<"\nNAME: "<<nameOfCustomer;
    cout<<"\nPrincipal Amt: "<<Principal;
    cout<<"\nRate: "<<Rate;
    cout<<"\nDuration(in yrs): "<<Duration;
    }
};

class simpl2:public SimpleInterest{

   int SI=0;

public:
    void simpleI(){
        SI=(Principal*Rate*Duration)/100;
        cout<<"\nSimple Interest is: "<<SI<<endl;
    }

    void calculateInstmnts(){
    int salary=0;
    int TotAmt = SI + Principal;
    cout<<"\nSalary(in k): ";cin >>salary;
    int intlAmt = salary/4;
    int futreMnths=TotAmt/intlAmt;
    cout<<"You can pay "<<intlAmt
    <<" per month to complete installments in "
    << futreMnths<< " months"<<endl;
    }
};


int main(){

    simpl2 si[10];

    for(int i=0;i<10;i++){
    si[i].getInfo();
    si[i].displayInfo();
    si[i].simpleI();
    si[i].calculateInstmnts();
    // calculateInstmnts(si[i]);
    }
};
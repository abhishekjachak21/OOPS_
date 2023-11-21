
///----------------------------------------------------------

#include<iostream>
using namespace std;

class SimpleInterest{
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

    SimpleInterest si[10];

    for(int i=0;i<10;i++){
    si[i].getInfo();
    si[i].displayInfo();
    si[i].simpleI();
    si[i].calculateInstmnts();
    // calculateInstmnts(si[i]);
    }
};




/*
int main(){
    SimpleInterest si1,si2("Abhi",2000,8.2,2);

    si1.getInfo();
    si1.displayInfo();
    si1.simpleI();
    si1.calculateInstmnts();


    si2.displayInfo();
    si2.simpleI();
    si2.calculateInstmnts();

    return 0;
}

///----------------------------------------------------






///----------------------------------------------------

/* #include<iostream>
using namespace std;

class SimpleInterest {
private:
    int Principal;
    string nameOfCustomer;
    float Rate;
    int Duration;  //in yrs
    int SI;

public:
    SimpleInterest() {}  // Default constructor

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

    void simpleI() {
        SI = (Principal * Rate * Duration) / 100;
        cout << "\nSimple Interest is: " << SI << endl;
    }

    // Friend function to calculate installments
    friend void calculateInstmnts(SimpleInterest si);
};

void calculateInstmnts(SimpleInterest si) {
    int salary = 0;
    int TotAmt = si.SI + si.Principal;
    cout << "\nSalary(in k): "; cin >> salary;
    int intlAmt = salary / 4;
    int futreMnths = TotAmt / intlAmt;
    cout << "You can pay " << intlAmt
        << " per month to complete installments in "
        << futreMnths << " months" << endl;
}

int main() {
    SimpleInterest si[10];

    for (int i = 0; i < 10; i++) {
        si[i].getInfo();
        si[i].displayInfo();
        si[i].simpleI();
        calculateInstmnts(si[i]);
    }

    return 0;
} */

///---------------------------------------------------------

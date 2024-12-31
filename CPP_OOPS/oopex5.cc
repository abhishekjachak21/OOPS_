#include <iostream>
using namespace std;

class employee
{
   
protected:
string name,gender;
int age;

public:

void getjoin()
{
 
    cout<<"Enter name : ";cin>>name;
    cout<<"Enter the age: "; cin>>age;
    cout<<"Enter the gender: ";cin>>gender;
}
};

class informaton{
protected:
    string department;
    int salary;

public:
    void getInfo()
   {
     cout<<"Enter the department name: "; cin>>department;
     cout<<"Enter the salary: ";cin>>salary;
   }
};

class office : public employee , public informaton {
public :
 void officeInfo() {
  cout<<"Enter the employee detailes"<<endl;
  getjoin();
  cout<<"Enter the department information"<<endl;
  getInfo();
  }
 void allInfo() {
    cout<<"\n\nThe ALL info of Employee: "<<endl;
    cout<<" Name of employee=> "<<name<< endl;
    cout<<" Age of employee: "<<age<<endl;
    cout<<" Gender of employee: "<<gender<<endl;
    cout<<" Department Information:  "<<endl;
    cout<<"Department name of the employee:  "<< department <<endl;
    cout<<"Salary of the employee=>  "<< salary <<endl;
 }

 };
int main ()
{
    office off;
    off.officeInfo();
    off.allInfo();
}
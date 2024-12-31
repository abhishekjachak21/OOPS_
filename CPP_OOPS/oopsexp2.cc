#include <iostream>
using namespace std;

class Complex{
public:
float real, imaginary;

Complex addition(Complex c1, Complex c2){
Complex c3;
c3.real = c1.real + c2.real;
c3.imaginary = c1.imaginary + c2.imaginary;
return c3;
}

Complex subtraction(Complex c1, Complex c2){
Complex c3;
c3.real = c1.real - c2.real;
c3.imaginary = c1.imaginary - c2.imaginary;
return c3;
}

Complex multiplication(Complex c1, Complex c2){
Complex c3;
c3.real = c1.real*c2.real - (c1.imaginary*c2.imaginary);
c3.imaginary = c1.imaginary*c2.real + c1.real*c2.imaginary;
return c3;
}

Complex division(Complex c1, Complex c2){
Complex c3;
c2.imaginary = -c2.imaginary;
c3 = multiplication(c1, c2);
c3.real = (c3.real)/(c2.real*c2.real + c2.imaginary*c2.imaginary);
c3.imaginary = (c3.imaginary)/(c2.real*c2.real + c2.imaginary*c2.imaginary);
return c3;
}

Complex conjugate(Complex c1)
{  c1.imaginary = -c1.imaginary;
return c1;
}
};

int main()
{
Complex c1,c2,c3;
cout<<"Enter the first complex number: "<<endl;
cout<<"Real part: ";
cin>>c1.real;
cout<<"Imaginary Part: ";
cin>>c1.imaginary;
cout<<"\nEnter the second complex number: "<<endl;
cout<<"Real part: ";
cin>>c2.real;
cout<<"Imaginary Part: ";
cin>>c2.imaginary;
c3 = c3.addition(c1, c2);
cout<<"\nAddition of the two complex numbers is:"<<endl;
cout<<c3.real<<" +i"<<c3.imaginary<<endl;
c3 = c3.subtraction(c1, c2);
cout<<"Subtraction of the two complex numbers is:"<<endl;
cout<<c3.real<<" +i"<<c3.imaginary<<endl;
c3 = c3.multiplication(c1, c2);
cout<<"Multiplication of the two complex numbers is:"<<endl;
cout<<c3.real<<" +i"<<c3.imaginary<<endl;
c3 = c3.division(c1, c2);
cout<<"Division of the two complex numbers is:"<<endl;
cout<<c3.real<<" +i"<<c3.imaginary<<endl;
return 0;
}
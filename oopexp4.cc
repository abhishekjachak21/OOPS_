#include <iostream>
using namespace std;

class complex{
    public: float real,imag;
    complex()
    {
        real=0;
        imag=0;
    }
void input()
{
    cout<<"Enter real and imaginary values:"<<endl;
    cin>>real>>imag;
}
void display()
{
    cout<<"\ncomplex number is: "<<endl;
    cout<<real<<"+i"<<imag;
}
complex operator + (complex c1)
{
    complex temp;
    temp.real=real+c1.real;
    temp.imag=imag+c1.imag;
    return temp;
}
complex operator - (complex c1)
{
    complex temp1;
    temp1.real=real-c1.real;
    temp1.imag=imag-c1.imag;
    return temp1;
}
complex operator * (complex c1)
{
    complex temp2;
    temp2.real=(real*c1.real)-(imag*c1.imag);
    temp2.imag=(imag*c1.real)+(c1.imag*real);
    return temp2;
}
complex operator ^ (complex c1)
{
    complex temp;
        c1.imag=-c1.imag;
        temp.real=real*c1.real-(imag*c1.imag);
        temp.imag=imag*c1.real+(real*c1.imag);
        temp.real=float((temp.real)/(c1.real*c1.real+c1.imag*c1.imag));
        temp.imag=float((temp.imag)/(c1.real*c1.real+c1.imag*c1.imag));
        return temp;
}


};
int main()
{
    complex c1,c2,c3;
    int choice;


    cout<<"Enter the first complex number:"<<endl;
    c1.input();
    c1.display();
      cout<<"Enter the second complex number:"<<endl;
    c2.input();
    c2.display();


do{     cout<< endl<<"1 ADD"<<endl<<"2 SUB"<<endl<<"3 MULTIPLY"<<endl<<"4 DIVIDE "<<endl;

    cin>>choice;
    switch(choice){




    case 1:
    cout<<"Addition of two complex number is:"<<endl;
    c3=c1+c2;
    c3.display();
    break;

     case 2:
    cout<<"sub of two complex number is:"<<endl;
    c3=c1-c2;
    c3.display();
    break;
    
    case 3:
    cout<<"multiplication of two complex number is:"<<endl;
    c3=c1*c2;
    c3.display();
    break;

     case 4:
    cout<<"division of two complex number is:"<<endl;
    c3=c1^c2;
    c3.display();
    break;

    }
    }
    while(choice!=4);
    return 0;
}

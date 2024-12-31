#include<iostream>
using namespace std ;

//Sinle Inheritance code

// class A{
//   public:
//    int g,f,d;
//    void mul(int f,int d)
//    {
//     cout << f*d << endl ;
//    }
//   public:
//     void add(int f ,int d)
//    {
//     cout << f+d << endl ;
//    }

// };

// class B: public A {

// };

// int main()
// {
//     B b1,b2;
//     b1.add(3,5);
//     b1.mul(5,6);
//     b2.add(7,5);
//     b2.mul(9,6);
//     return 0;
// }


//Multiple Inheritance code

// #include<iostream>
// using namespace std ;

// class A{
 
//    int g,f,d;
   
//   public:
//     void add(int f ,int d)
//    {
//     cout << f+d << endl ;
//    }

// };

// class B {
//  public:
//     void mul(int f,int d)
//    {
//     cout << ((f*d)+100) << endl ;
//    }
// };

// class C:public A,public B
// {

// };

// int main()
// {
//     C c1,c2;
//     c1.add(3,5);
//     c1.mul(5,6);
//     c2.add(7,5);
//     c2.mul(9,6);
//     return 0;
// }


//Multilevel Inheritance
// #include<iostream>
// using namespace std ;

// class A{
//     public:
//    int g,f,d;

   
//   public:
//     void add(int f ,int d)
//    {
//     cout << f+d << endl ;
//    }

// };

// class B:public A
//  {
//  public:
//     void mul(int f,int d)
//    {
//     cout << ((f*d)+100) << endl ;
//    }
// };

// class C:public B{

// };

// int main()
// {
//     C c1,c2;
//     c1.add(3,5);
//     c1.mul(5,6);
//     c2.add(7,5);
//     c2.mul(9,6);
//     return 0;
// }


// // //Constructor Handling
// class A{
// protected:
//  int a;
// public:
//  A(int x)
//  {
//  a=x;
//  } 
// void dissplay()
// {
//     cout << "Value of A: "<< a <<endl;
// }
// };

// class B:public A{
// protected:
//  int b;
// public:
//  B(int y)
//  {
//  b=y;
//  }
//  void pd()
//  {
//     cout << "Value of B: "<< b <<endl;
//  }
// };

// class C:public A, public B{
// protected:
//  int c;
// public:
//  C(int p,int q,int r):A(p),B(q)
//  {
//  c=r;
//  }
//  void op()
//  {
//     cout << "Value of C: "<< c <<endl;
//  }
// };

// int main()
// {
//     C cc(4, 5, 6);
//     cc.dissplay();
//     cc.pd();
//     cc.op();
//     // B bb(5);
//     // bb.display();
//     // A aa(6);
//     // aa.display();
//     return 0;
// }





/*
//that Ambiguity Problem
class A{
    protected:
     int a;
    public:
     void input()
     {
        cout<<"Enter A value\n";
        cin >> a;
     } 
     void display()
     {
        cout << a << "is A value\n";
     }
};

class B{
    protected:
     int b;
    public:
     void input()
     {
        cout << "enter B value\n";
        cin >> b;
     } 
     void getdata()
     {
        cout << "B value:"<< b ;
     }
};

class C:public A,public B
{
    int c;
    public:
    void input()
    {
        cout << "Enter C value\n";
        cin >> c;
        A::input();
    }
    void putdata()
    {
        cout<<c<< " is value of C \n";
    }
};
int main()
{
    C fuc;
    fuc.input();
    fuc.putdata();
    return 0;
}
*/

//Virtual Function
class A{
    protected:
     int a;
    public:
    virtual void input()
     {
        cout<<"Enter A value\n";
        cin >> a;
     } 
     void display()
     {
        cout << a << "is A value\n";
     }
};

class B:public A{
    protected:
     int b;
    public:
     void input()
     {
        cout << "enter B value\n";
        cin >> b;
     } 
     void getdata()
     {
        cout << "B value:"<< b ;
     }
};

int main()
{
    A *ptr;B aa;
    ptr = &aa;
    ptr->input();
    return 0;
}
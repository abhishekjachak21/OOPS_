#include<iostream>
using namespace std;

class BaseClass{
    public:
       
         void accept(){
            cout<<"Accepting Base class "<<endl;
        }

        virtual void display(){
            cout<<"Dispalying Base class "<<endl;
        }
};

class DerivedClass : public BaseClass{
    public:
            
            void accept(){
                cout<<"Accepting Derived class "<<endl;
            }

            void display(){
                cout<<"Displaying Derived class "<<endl;
            }
};

int main()
{
    BaseClass * bptr;
    BaseClass obj_base;
    DerivedClass obj_derived;
    bptr = &obj_derived; 
    bptr->accept();
    bptr->display();

    //   DerivedClass aa;
    //  aa.display();
    // //  aa.accept();
    //  aa.BaseClass.accept();
  
    return 0;
}


/*
int main(){
    BaseClass * base_class_pointer;
    BaseClass obj_base;
    DerivedClass obj_derived;
    base_class_pointer = &obj_derived; // Pointing base class pointer to derived class

    base_class_pointer->var_base = 34;
    // base_class_pointer->var_derived= 134; // Will throw an error
    base_class_pointer->display();

    base_class_pointer->var_base = 3400; 
    base_class_pointer->display();

    DerivedClass * derived_class_pointer;
    derived_class_pointer = &obj_derived;
    derived_class_pointer->var_base = 9448;
    derived_class_pointer->var_derived = 98;
    derived_class_pointer->display();

    return 0;
}
*/
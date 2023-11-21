
/*Q1Write a program in C++ to derive class bicycle
from class vehicle with appropriate synatax , Define 
suitable members & functions to form complete aaplicn*/


#include <iostream>
using namespace std;

class vehicle
{
    protected:
    int price;
    string colour;
    string model,model_no;
};
class bicycle:public vehicle
{
    public:
    void getdata()
    {
        cout<<"Enter Bicycle Details"<<endl;
        cout<<"Enter Model"<<endl;
        cin>>model;
        cout<<"Enter Colour"<<endl;
        cin>>colour;
        cout<<"Model Number"<<endl;
        cin>>model_no;
        cout<<"Enter Price"<<endl;
        cin>>price;
    }
    void display()
    {
        cout<<"Details of Bicycle are:"<<endl;
        cout<<"Model: "<<model<<endl;
        cout<<"Colour: "<<colour<<endl;
        cout<<"Model Number: "<<model_no<<endl;
        cout<<"Price: "<<price<<endl;
    }
};

int main()
{
    bicycle b1;
    b1.getdata();
    b1.display();
    return 0;
}

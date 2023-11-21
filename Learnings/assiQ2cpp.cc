/*Q2Write a C++ program to find Area of a Polygon (Implement
application by using different types of inheritance)*/

//Name - Abhishek Jachak
// Roll No TYETA66

#include <iostream>
using namespace std;

class shape
{
    protected:
    int edge;
    int length,breadth;
    void area();
};
class rectangle: public shape
{
    public:
    void getdata()
    {
        cout<<"Enter Size Paremeters"<<endl;
        cin>>length>>breadth;
    }
    void area()
    {
        cout<<"Area of rectangle is: "<<length*breadth<<" Sq. Units"<<endl;
    }
};
class square: public shape
{
    public:
    void getdata()
    {
        cout<<"Enter Size Paremeters"<<endl;
        cin>>length;
    }
    void area()
    {
        cout<<"Area of square is: "<<length*length<<" Sq. Units"<<endl;
    }
};
class circle: public shape
{
    public:
    void getdata()
    {
        cout<<"Enter Size Paremeters"<<endl;
        cin>>length;
    }
    void area()
    {
        cout<<"Area of circle is: "<<3.14*length*length<<" Sq. Units"<<endl;
    }
};

int main()
{
    rectangle r1;
    square s1;
    circle c1;
    r1.getdata();
    r1.area();
    s1.getdata();
    s1.area();
    c1.getdata();
    c1.area();
    return 0;
}

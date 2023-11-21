#include <iostream> 
using namespace std ;

class student{

   char name[20],grade;
   int roll;
   float prcent,total_marks;

public :

  student(){                
    name[20] = ' ';
    roll = 0;
    prcent = 0.0;
    total_marks = 0.0 ;
  }

void accept()
{
   cout<<"\nEnter name and roll no \n" ;
   cin >> name >> roll  ;
}
void display()
{
    int m1,m2,m3,m4,m5 ;
    cout << "Enter Marks of 5 subjects: " << endl ;
    cin >> m1 >> m2 >> m3 >> m4 >> m5 ;
    total_marks = m1+m2+m3+m4+m5 ;

     prcent = ((total_marks/500)*100) ;
     if(prcent>=90)
      { grade = 'A'; }
     else if(prcent>75 && prcent<90)
      { grade = 'B' ; }
     else
      { grade = 'C' ; }
    cout << " Student Name : " << name << endl ;
    cout << " Student Roll No : " << roll << endl ;
    cout << " Student Percentage : " << prcent << endl ;
    cout << " Student Grade : " << grade << endl ;
    
}
};

int main()
{
   student s1,s2,s3,s4,s5 ;
   cout << "Student 1 -->" << endl ;
   s1.accept();
   s1.display();
   cout << "\nStudent 2 -->" << endl ;
    s2.accept();
   s2.display();
   cout << "\nStudent 3 -->" << endl ;
    s3.accept();
   s3.display();
   cout << "\nStudent 4 -->" << endl ;
    s4.accept();
   s4.display();
   cout << "\nStudent 5 -->" << endl ;
    s5.accept();
   s5.display();
   return 0;

}



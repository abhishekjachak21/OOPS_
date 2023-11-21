#include <iostream> 
using namespace std ;

///----------------------------------
///copyCons of 1st obj

class mobile{
  int ram,battery;
  string name,processor;

  public :

  mobile()
  {     
     name = "" ;
     ram = 0;
     processor = "" ;
     battery = 0 ;
  }

  mobile(string a,int b,string c,int d)
  {
     name = a ;
     ram = b;
     processor = c ;
     battery = d ;
  }
  
  mobile(mobile &pico2)
  {
     name = pico2.name ;
     ram = pico2.ram;
     processor = pico2.processor ;
     battery = pico2.battery ;
  }

  //  mobile(mobile &pico)
  // {
  //    name = pico.name ;
  //    ram = pico.ram;
  //    processor = pico.processor ;
  //    battery = pico.battery ;
  // }

  void getmobiledata();
  void displaymobiledata();
 
};

void mobile::getmobiledata(){
  cout<< "\nEnter Mobile Details: \n";
 cout << "\n Name: " ;cin>> name ;
 cout << " Ram: "; cin>> ram ;
 cout << " Processor: "; cin>> processor ;
 cout << " Battery: "; cin>>battery  ;
 cout<<endl;
}

void mobile::displaymobiledata(){
  cout<<"\nYour Mobile Details: ";
 cout << "\n Name: " << name ;
 cout << "\n Ram: " << ram ;
 cout << "\n Processor: " << processor ;
 cout << "\n Battery: " << battery << endl ;
}

int main(){
  mobile pico,pico2("Nokia",8,"Snap",5000),pico3(pico2),pico4(pico2);
  
  pico.getmobiledata();
  pico.displaymobiledata();
  pico2.displaymobiledata();
  pico3.displaymobiledata();
  // pico4.getmobiledata();
  pico4.displaymobiledata();
  


  return 0;
}
///----------------------------------



///----------------------------------
///taking input step wise+copyCons of 2nd obj

// class mobile{
//   int ram,battery;
//   string name,processor;

//   public :

//   mobile()
//   {     
//      name = "     " ;
//      ram = 0;
//      processor = "      " ;
//      battery = 0 ;
//   }

//   mobile(string a,int b,string c,int d)
//   {
//      name = a ;
//      ram = b;
//      processor = c ;
//      battery = d ;
//   }
  
//   mobile(mobile &pico2)
//   {
//      name = pico2.name ;
//      ram = pico2.ram;
//      processor = pico2.processor ;
//      battery = pico2.battery ;
//   }
//   // cout<< "Enter Mobile Details:"<< void getmobiledata();
//   // cout<<"\nYour Mobile Details: "<<void displaymobiledata();
//   // cout<< "Enter Mobile Details: \n";
//   void getmobiledata();
//   // cout<<"\nYour Mobile Details: \n";
//   void displaymobiledata();
//  //keepInMind..cout isn't works here..idk why this kolavari but
// };

// void mobile::getmobiledata(){
//   cout<< "Enter Mobile Details: \n";
//  cout << "\n Name: " ;cin>> name ;
//  cout << " Ram: "; cin>> ram ;
//  cout << " Processor: "; cin>> processor ;
//  cout << " Battery: "; cin>>battery  ;
//  cout<<endl;
// }

// void mobile::displaymobiledata(){
//   cout<<"\nYour Mobile Details: \n";
//  cout << "\n Name: " << name ;
//  cout << "\n Ram: " << ram ;
//  cout << "\n Processor: " << processor ;
//  cout << "\n Battery: " << battery << endl ;
// }

// int main(){
//   mobile pico,pico2("Nokia",8,"Snap",5000),pico3(pico2);
  
//   pico.getmobiledata();
//   pico.displaymobiledata();
//   // pico2.getmobiledata(); ///no need of this fun
//   pico2.displaymobiledata();
//   // pico3.getmobiledata();  ///no need of this fun
//   pico3.displaymobiledata();


//   return 0;
// }
///----------------------------------






///----------------------------------
///perfect but not taken any input inthis
// class mobile{
//   int ram,battery;
//   string name,processor;
  

//   public :

//   mobile()
//   {     
//      name = "Vivo Y11" ;
//      ram = 3;
//      processor = "Snap" ;
//      battery = 5000 ;
//   }

//   mobile(string a,int b,string c,int d)
//   {
//      name = a ;
//      ram = b;
//      processor = c ;
//      battery = d ;
//   }
  
//   mobile(mobile &pico2)
//   {
//      name = pico2.name ;
//      ram = pico2.ram;
//      processor = pico2.processor ;
//      battery = pico2.battery ;
//   }
//   void getmobiledata();
// };

// void mobile::getmobiledata(){
//  cout << "\n Name: " << name ;
//  cout << "\n Ram: " << ram ;
//  cout << "\n Processor: " << processor ;
//  cout << "\n Battery: " << battery << endl ;
// }

// int main(){
//   mobile pico,pico2("abhi",8,"Snap",5000),pico3(pico2);
  
//   pico.getmobiledata();
//   pico2.getmobiledata();
//   pico3.getmobiledata();


//   return 0;
// }
///----------------------------------










///----------------------------------
///////very old aug month pgm
// #include <iostream> 
// using namespace std ;

// class mobile{
//   string name,processor;
//   int ram,battery;

//   public :

// //   mobile();

//   mobile(string Aname="Robo",int Aram=4,string 
//   Aprocessor="SNap",int Abattery=5000)
//   {
     
//      name = Aname ;
//      ram = Aram;
//      processor = Aprocessor ;
//      battery = Abattery ;
//   }
  
//   mobile(mobile &rty)
//   {
//     name = rty.name ;
//      ram = rty.ram;
//      processor = rty.processor ;
//      battery = rty.battery ;
//   }
   
//    void getmobiledata();

// };
// void mobile::getmobiledata()
// {
//  cout << "\n Name: " << name ;
//  cout << "\n RAm: " << ram ;
//  cout << "\n Processor: " << processor ;
//  cout << "\n Battery: " << battery << endl ;
// }

// int main()
// {
//   mobile pico ;

//   mobile pico2("abj",5,"nap",35000) ;

//   mobile pico3(pico2);
  
//   pico.getmobiledata();
//   pico2.getmobiledata();
//   pico3.getmobiledata();


//   return 0;
// }
///----------------------------------































// class saturday
// {
//  public :
//   int r,j,k;
//   int dadajis_age,dadis_age,g ; 
//  public :
   
//    saturday()           //default constructor
//    {
//     r= 0 ;
//     j= 0 ;
//     k = 0 ;
//    }
//    saturday(int g)      //paramterized constructor
//    {
//     dadajis_age = g ;
//    }
//    saturday(saturday &mood2)   //copy constructor
//    {
//     dadis_age = (mood2.dadajis_age - 5) ;
//    }

//    void accept()
//    {
//      cout << "enter age " ;
//      cin >> r ;
//      j = (r*10000) ;
//    }

//    void display()
//    {
//       cout << j << " is your futureINCOME\n ";
//    }
// };

// int main()
// {
//    saturday mood1,mood2(56),mood3(mood2);  //parameterized constructor
//                                   //copy constructor
//    mood1.accept();
//    mood1.display();
//    cout << mood2.dadajis_age << " is age of dadaji\n\n " ;
   
//    mood2.accept();
//    mood2.display();
//    cout << mood3.dadis_age << " is age of dadiji\n\n " ;

//    return 0;
// }

//Assignment No. 1 {Minor-Software Development}

#include<iostream>
using namespace std;

class Weather
{
 int day,high_temp,low_temp,rain,snow;

public:

Weather()      
{
  day=0;
  high_temp=0;
  low_temp=0;
  rain=0;
  snow=0;
}

Weather(int a,int b,int c,int d,int e)
{
  day=a;
  high_temp=b;
  low_temp=c;
  rain=d;
  snow=e;
}
 
Weather(Weather &w)
{
  day=w.day;
  high_temp=w.high_temp;
  low_temp=w.low_temp;
  rain=w.rain;
  snow=w.snow;
}
 
void accept()
 
{
  cout<<"\nEnter the day of month:"; 
  cin>>day;
  cout<<"Enter high temperature:";
  cin>>high_temp;
  cout<<"Enter low temperature:";
  cin>>low_temp;
  cout<<"Enter the rain of day:";
  cin>>rain;
  cout<<"Enter the snow of day:";
  cin>>snow;
}

 void display()
{
 cout<<"\n"<<day<<"\t"<<high_temp<<"\t"<<low_temp<<"\t"<<rain<<"\t"<<snow; 
}

void average(Weather w4[31],int n)
{
int sumhight=0,sumlowt=0,sumrain=0,sumsnow=0;
int alowt,ahight,arain,asnow;

for(int i=0;i<n;i++) 
{
   sumhight=sumhight+w4[i].high_temp;
   sumlowt=sumhight+w4[i].low_temp;
   sumrain=sumrain+w4[i].rain;
   sumsnow=sumsnow+w4[i].snow;
  }
  
alowt=sumlowt/n;
ahight=sumhight/n;
arain=sumrain/n;
asnow=sumsnow/n;
cout << "\nAverage of:" ;
cout << "Rain:" << arain ;
cout << "\nAverage of Snow:" << asnow ;
cout<<"\nAverage of High temp:"<<ahight;
cout<<"\nAverage of Low temp:"<<alowt;
}
};

int main()
{
 int ch,n=0,i;
 Weather w1;                    //default constructor
 w1.display();	

 Weather w2(1,2,3,4,5);  //Parameterised constructor
 w2.display();   

 Weather w3(w2);             //Copy constructor
 w3.display();

 Weather w4[31];
 Weather w5;

do
{
  cout<<"\nEnter choice:";
  cout<<"\n1.Accept"<<"\n2.Display"<<"\n3.Average"<<"\n4.EXIT\n";
  cin>>ch;

  switch(ch)
 {
   case 1:
	cout<<"\nEnter the number of day";
  	cin>>n;
	cout<<"\nEnter the data:";
	  for(i=0;i<n;i++)
       	{
     	 w4[i].accept();
	    }
    	break;

   case 2:
	cout<<"\nDay"<<"\t"<<"Hightem"<<"\t"<<"Lowtem"<<"\t"<<"Rain"<<"\t"<<"Snow";
	for(i=0;i<n;i++)
	{
	  w4[i].display();
	}
	break;

   case 3:
	w5.average(w4,n);
   	break;
  }

 }
while(ch!=3);
return 0;

}
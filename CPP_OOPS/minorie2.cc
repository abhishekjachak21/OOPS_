#include<iostream>
#include<string.h>
using namespace std;
class Base1
{
protected:
	char name[10];
	char dob[10];
	string bg;

};

class Base2
{
protected:
	float height,weight;

};

class Base3
{
protected:

	long int policyno;
	

};

class employee:public Base1,public Base2,public Base3
{
public:
	long int lcno,phone;
	int key;

	int accept()
	{
	cout<<"\nEnter details\n";
    cout<<"Name,DOB,Blood group,Height,Weight,Contact,lic.no,Policyno\n";
	cin>>name>>dob>>bg>>height>>weight>>phone>>lcno>>policyno;
	}

	int display()
	{
	cout<<"\nDetails YOU have entered: \n";
	cout<<"\n"<<"Name"<<"\t"<<"DOB"<<"\t"<<"Bd_gp"<<"\t"<<"Height"<<"\t"<<"Weight"<<"\t"<<"Contact"<<"\t\t"<<"licno"<<"\t\t"<<"policyno";
	cout<<"\n"<<name<<"\t"<<dob<<"\t"<<bg<<"\t"<<height<<"\t"<<weight<<"\t"<<phone<<"\t"<<lcno<<"\t"<<policyno<<endl;
	}

	int search(char key[10])
	{
	if(strcmp(name,key)==0)
	{
	return 1;	
	}
	else
	return 0;
	}
};

int main()
{
int i,n;
char key[10];
employee e[10];
//e[i].accept();
//e[i].display();
	int ch;
do{
	cout<<"\n1.Accept"<<"\n"<<"2.Display"<<"\n"
    <<"3.Search"<<"\n"<<"4.Modify"<<"\n"<<"5.Insert"
    <<"\n"<<"6.Delete\n";
	cin>>ch;
switch(ch)
	{
	case 1:
	cout<<"\nEnter number of entries you want to add: ";
	cin>>n;
	
	for(i=0;i<n;i++)
	e[i].accept();
	break;

	case 2:
	for(i=0;i<n;i++)
	e[i].display();
	break;
	
	case 3:
	cout<<"\nenter name you want to search\n";
	cin>>key;
	for(i=0;i<n;i++)
	if(e[i].search(key)){
	cout<<"entry found";
	break;
	}
	if(i==n)
	{
	cout<<"\nrecord not found";
	}
	
	break;
	
	case 4:
	cout<<"\nenter name of the person";
	cin>>key;
	for(i=0;i<n;i++)
	if(e[i].search(key))
	{
	e[i].accept();
	break;
	}
	if(i==n)
	{
	cout<<"\nrecord not present";
	break;
	}
	break;
	case 5:
	
	e[n++].accept();
	break;

	case 6:
	cout<<"\nenter name of the person";
	cin>>key;
	for(i=0;i<n;i++)
	{
		if(e[i].search(key))
	{
	for(;i<n-1;i++)
	{
		e[i]=e[i+1];	
	}
	n--;
	}
	}
	if(i==n)
	cout<<"\nrecord not present";
	break;
	}
}while(ch!=7);
}
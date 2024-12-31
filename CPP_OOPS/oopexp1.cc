#include <iostream>

using namespace std;
void read();
void display();
void swap1(int* ,int*);
void sort1();
#define max 5
int a[max];


int main()
{
    read();
    display();
    sort1();


    return 0;
}
void read()
{
    cout<<"enter the numbers randomly"<<endl;
    for(int i=0;i< max;i++)
    {
        cin>>a[i];
    }
}

void display()
{
    int i;
    cout<<"enter numbers"<<endl;
    for(i=0;i<max;i++)
        cout<<a[i]<<endl;
}

void swap1(int*a,int*b){
int temp=*a;
*a=*b;
*b=temp;
}

void sort1(){
for(int i=0;i<max;i++){
    for(int j=i+1;j<max;j++){
        if (a[i]>a[j])
                swap1(&a[i],&a[j]);
    }
}
cout<<"Sorted list"<<endl;
for(int i=0;i<max;i++)
        cout<<a[i]<<endl;
}



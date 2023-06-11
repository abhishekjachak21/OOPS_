#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    auto greet=[]()
    {
        cout<<"\nHello world"<<endl;
    };
    
    auto sorting=[](int a,int b,int c)
    {
        int arr[] = {a,b,c};
        int n = sizeof(arr)/sizeof(arr[0]);
        sort(arr,arr + n);
        cout<<"Array after Sorting:";
        for(int i=0;i<n;++i)
        cout<<arr[i]<<"";
    };
    
    auto simple_intrest=[]()
    {
        int p,r,t;
        
        cout<<"Calculate the simple intrest:";
        cout<<"Input the principle(in rs):";
        cin>>p;
        cout<<"Input the rate of Intrest(in %):";
        cin>>r;
        cout<<"Input the Time(in yrs)";
        cin>>t;
        
        
        int i=(p*r*t)/100;
        
        cout<<"The simple intrest of the amount "<<p<<" for "<<t<<" years "<<r<<"% "<<" is "<<i;
        
    };
    
    simple_intrest();
    cout<<endl;
    greet();
    sorting(5,3,4);
    cout<<endl;
    
    return 0;
    }



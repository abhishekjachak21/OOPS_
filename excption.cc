#include<iostream>
using namespace std;




int main()
{
   int a;
   cout << " enter A Value: \n";
   cin >> a;
   try{
    if(a==0)
      throw 4;
    else if(a==100)
      throw 4.4F;  //writ F for float,else use double keyword
    else if(a==1000)
      throw 't';
    else
      cout<<"a: "<<a<<endl;  
   }
  //  catch(int e){
  //   cout<<"Cannot get "<<e<<endl;
  //  }
  //   catch(float e){
  //   cout<<"Cannot get "<<e<<endl;
  //  }
  //   catch(char e){
  //   cout<<"Cannot get "<<e<<endl;
  //  }

   catch(...)
   {
    cout<<"error occured!"<< endl ;
   }

  return 0;
}












// int main()
// {
//    int a, b, c;
//    cout << " enter no: "<< endl ;
//    cin>> a>> b ;
//    try{
//      if(b!=0){
//        c=a/b;
//       cout<<"Your Ans: "<<c<<endl;
//     }
//     else
//       throw b;
//    }
//    catch(int b){
//      cout<<"Divsion by "<<b<<" is invalid!\n";
//    }
//    return 0;
// }



















// int main()
// {
//   float n1,n2,result;
//   cout<<"n1 & n2: "<<endl ;
//   cin>>n1>>n2;

// //   result=n1/n2;
// //   cout<< "result: "<< result;

//    try{
//    if(n2==0)
//     {throw 0;}
//     else if(n1=='-' || n2=='-')
//     {throw "sym";}
//     else if(n1/n2==4)
//     {throw 2;}
//     else
//      result=n1/n2;
//      cout<< "result is: "<< result;
//    }

//    catch(float x){
//     cout<<"we can't divide by "<<x;
//    }
//    catch(string y){
//     cout<<"we can't divide by "<<y;
//    }
//    catch(int z){
//     cout<<"we can't divide by "<<z;
//    }

//    cout<<"\nend of pgm!\n";
// }








///1 try nd 1 catch
// int main()
// {
//   float n1,n2,result;
//   cout<<"n1 & n2: "<<endl ;
//   cin>>n1>>n2;

// //   result=n1/n2;
// //   cout<< "result: "<< result;

//    try{
//    if(n2==0)
//     {throw n2;}
//     else {
//     result=n1/n2;
//     cout<<"Result: "<<result;
//    }}
//    catch(float x){
//     cout<<"we can't divide by "<<x;
//    }

//    cout<<"\nend of pgm!\n";
// }


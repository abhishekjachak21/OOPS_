#include<iostream>
using namespace std ;

// void swapfun(int* a, int* b)
// {
//   int temp = *a ;
//   *a = *b ;
//   *b = temp ;
// }

// int main()
// {
//     int x=4,y=6;
//     cout <<"x is "<<x<<" & y is "<<y<<endl ;
//     swapfun(&x,&y);
//     cout <<"x is "<<x<<" & y is "<<y<<endl ;
//     return 0 ;
// }
int sum(int a , int b)
{
    int c = a+b;
    return c ;
}

int main()
{
    cout << "sum of 4 & 6 is "<<endl<<sum(4,6)<<endl;
    return 0;
}


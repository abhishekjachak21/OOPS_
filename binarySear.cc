#include<iostream>
using namespace std ;


int binarysearch(int arr[],int size,int key);
int main()
{
    int even[6]={2,4,6,8,14,18};
    int odd[6]={1,3,7,9,11,15};
    
    int index = binarysearch(odd,6,11);
  
    cout << "Index is: "<< index << endl;
    return 0;
}

int binarysearch(int arr[],int size,int key)
{
    int start = 0;
     int end = (size-1);
    int mid= ((start+end)/2);

    while(start <= end )
    {
       if (arr[mid]==key){
        return mid;
       }

       if(key>arr[mid]){
        start = (mid+1);
       }
       else{
        end= (mid-1);
       }
       mid=(start+end)/2;
    }
    return -1;
}

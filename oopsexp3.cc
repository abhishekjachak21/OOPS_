#include <iostream>
using namespace std;
#define size 5
class stack{
public:
int mystack[size];
int top;
//methods
void push(int);
int pop();
void display();
//constructor for stack
stack(){
top = -1;
}
//~stack();
};
void stack::push(int n){
if (top == size-1){
cout<<"Stack is full!"<<endl;
}
else{
top++;
mystack[top]=n;
}}
int stack::pop(){
if (top == -1){
cout<<"Stack is empty!"<<endl;
}
else{
int x;
x = mystack[top];
top--;
return x;
}
}
void stack::display(){
int i;
if (top == -1){
cout<<"Stack is empty!"<<endl;
}
else{
for(i=top;i>=0;i--){
cout<<mystack[i]<<endl;
}
}
}
int main()
{
stack obj;
int num;
int choice;
do{
cout<<"1.Push 2.Pop 3.Display 4.Exit"<<endl;cout<<"Enter your choice: ";
cin>>choice;
cout<<"\n";
switch(choice){
case 1:
cout<<"Enter a number: "<<endl;
cin>>num;
obj.push(num);
break;
case 2: obj.pop();
break;
case 3: obj.display();
break;
case 4: cout<<"Exit"<<endl;
break;
}
}while(choice!=4);
return 0;
}
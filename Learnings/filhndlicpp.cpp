// #include<iostream>
// #include<fstream>
// #include<string>
// using namespace std;

// int main()
// {
// //    ifstream inn;
// //    string st;
// //    inn.open("self25.txt");

// //    while(inn.eof()==0)
// //    {
// //    getline(inn,st);
// //    cout<<st<<endl;
// //    }


//    ofstream ott;
//    string st2;int age;
//    ott.open("self25.txt");
//    cout<< "Enter Name: ";cin>> st2;
//    cout<< "Enter Age: ";cin>>age;
//    ott<<st2;ott<<age;

//     return 0;
// }



#include<iostream>
#include<fstream>

using namespace std;

int main()
{
    fstream menu;
    menu.open("menu.txt");
    cout << "Please enter your name :";
    string name;
    getline(cin, name);
    fstream list;
    list.open("Customer_name.txt",ios::out); //////remaining
    list <<"Customer Name :"<<name<<endl;
    cout  <<"Enter the quantity ; "<<endl;
    if(menu.is_open())
    {
        string object;
        while(menu.good())
        {
            getline(menu,object);
            cout <<object;
            int quantity;
            cin>>quantity;
            list <<object<<" "<<quantity<<endl;
            
        }
    }
    list.close();
    menu.close();
    return 0; 
}
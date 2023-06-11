#include <iostream>
using namespace std;

class Time{
    public:
    int hours;
    int mins;
   
    void showtime(){
        if(mins < 60){
            cout<<"Time is "<<hours<<" hours and "<<mins<<" minutes"<<endl;
        }
        else{
            mins %= 60;
            hours++;
            cout<<"Time is "<<hours<<" hours and "<<mins<<" minutes"<<endl;
        }
       
    }
   
    Time addtime(Time t){
        Time temp;
        temp.hours = hours + t.hours;
        temp.mins = mins + t.mins;
        return temp;
    }
   
    Time(int x, int y){
        hours = x;
        mins = y;
    }
   
    Time(Time &t){
        hours = t.hours;
        mins = t.mins;
    }

    Time(){
        hours = 0;
        mins = 0;
    }
};

class TimeM{
    public:
    int mins;
   
    void showtime(){
            cout<<"Time is "<<mins<<" minutes"<<endl;
    }
   
    TimeM addtime(TimeM t){
        TimeM temp;
        temp.mins = mins + t.mins;
        return temp;
    }
   
    TimeM(int x){
        mins = x;
    }
   
    TimeM(TimeM &t){
        mins = t.mins;
    }

    TimeM(){
        mins = 0;
    }
};

void addtime(Time t, TimeM t_){
    cout<<"Addition of Time is:"<<endl;
    int min = (t.hours)*60 + (t.mins + t_.mins);
    cout<<"In Minutes: "<<min<<" minutes"<<endl;
    int hours = (int)(min/60);
    min %= 60;
    cout<<"In Hours and Minutes: "<<hours<<" hours "<<min<<" minutes"<<endl;
}

void addtime(TimeM t_, Time t){
    cout<<"Addition of Time is:"<<endl;
    int min = (t.hours)*60 + (t.mins + t_.mins);
    cout<<"In Minutes: "<<min<<" minutes"<<endl;
    int hours = (int)(min/60);
    min %= 60;
    cout<<"In Hours and Minutes: "<<hours<<" hours "<<min<<" minutes"<<endl;
}


int main()
{
    Time t1(5,45);
    Time t2(3,30);
    Time t3;
   
    t3=t1.addtime(t2);
   
    t1.showtime();
    t2.showtime();
    t3.showtime();
   
    TimeM tm1(345);
    TimeM tm2(210);
    TimeM tm3;
   
    tm3=tm1.addtime(tm2);
   
    tm1.showtime();
    tm2.showtime();
    tm3.showtime();
   
    Time t4(t1);
   
    TimeM tm4(tm1);
    t4.showtime();
    tm4.showtime();
   
    cout<<"\n*******addtime-begin*****"<<endl;
    addtime(t4,tm4);
    cout<<"*******addtime-end*****"<<endl;
    cout<<"\n*******addtime-begin*****"<<endl;
    addtime(tm4,t4);
    cout<<"*******addtime-end*****"<<endl;
   
    return 0;
}
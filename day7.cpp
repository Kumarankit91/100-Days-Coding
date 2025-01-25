//Write a program to find Number of days in a given month of a given year

#include<iostream>
using namespace std;

int main(){

    int month, year, day;
    cout<<"Enter the Year"<<endl;
    cin>>year;

    cout<<"Enter the month"<<endl;
    cin>>month;
    if(((year%400==0)||(year%4==0 && year%100!=0)) && (month==2)){
        day=29;
        cout<<"Number of days in "<<month<<" month of the Year "<<year<<" is "<<day<<endl;
    }
    else if(month==2){
        day=28;
        cout<<"Number of days in "<<month<<" month of the Year "<<year<<" is "<<day<<endl;
    }
    else if(month==4 || month==6 || month==9 || month==11){
        day=30;
        cout<<"Number of days in "<<month<<" month of the Year "<<year<<" is "<<day<<endl;
    }
    else{
        day=31;
        cout<<"Number of days in "<<month<<" month of the Year "<<year<<" is "<<day<<endl;
    }

    return 0;
}
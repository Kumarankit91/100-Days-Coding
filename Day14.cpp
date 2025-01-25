//Write a program to reverse a given number
#include<iostream>
using namespace std;

int reverse_number(int number){
    int n = number;
    int remainder, reverse = 0;
    while (n!=0)
    {
        remainder = n%10;
        reverse = reverse*10 + remainder;
        n= n/10;
    }
    cout<<"Reverse of the given number is = "<<reverse<<endl;
}

int main(){
    int n;
    cout<<"Enter the number to be reversed"<<endl;
    cin>>n;
    reverse_number(n);
    return 0;
}
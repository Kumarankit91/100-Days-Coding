//Write a program to find Sum of digits of a number
#include<iostream>
using namespace std;
int sumOfDigits(int number){
    int n = number;
    int remainder, sum = 0;
    while(n!=0){
        remainder = n % 10;
        sum = sum + remainder;
        n= n/10;
    }
    cout<<"The sum of digits of the given number is  = "<< sum<<endl;
}
int main(){
    int num;
    cout<<"Enter the number"<<"\n";
    cin>>num;
    sumOfDigits(num);
    return 0;
}
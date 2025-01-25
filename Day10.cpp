//Write a program to find Factorial of a number
#include<iostream>
using namespace std;
int main(){
    int n,fact=1;
    cout<<"Enter the number "<<endl;
    cin>>n;
    if(n==0 || n==1){
        cout<<"The Factorial of the given number "<<n<<" is "<<1<<endl;
    }
    else if(n<0){
        cout<<"There is no factorial for negative numbers"<<endl;
    }
    else{
        for(int i=1;i<=n;i++){
            fact=fact*i;
        }
        cout<<"The factorial of the given number "<<n<<" is "<<fact<<endl;
    }
    return 0;
}
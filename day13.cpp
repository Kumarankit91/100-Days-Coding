//Write a program to find Sum of N natural numbers
#include<iostream>
using namespace std;

int sumOfN_natural(int number){
    int i, sum = 0;
    for(i=1; i<= number; i++){
        sum = sum +i;
    }
    cout<<"Sum of "<< number <<"natural number is = "<<sum<<endl;
}

int main(){
    int n;
    cout<<" enter the natural number upto which sum has to be calculated "<<endl;
    cin>>n;
    sumOfN_natural(n);
    return 0;
}
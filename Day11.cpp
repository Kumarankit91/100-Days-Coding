//Write a program to find Fibonacci series up to n
#include<iostream>
using namespace std;
int main(){
    int n, t1=0, t2=1, t3;
    cout<<"Enter the number of term  you want to print the Fibonacci series"<<endl;
    cin>>n;
    cout<<"The Fibonacci series is :-"<<endl;
    cout<<t1<<endl<<t2<<endl;
    for(int i=2; i<n; ++i){
        t3 = t1+ t2;
        cout<<t3<<endl;
        t1=t2;
        t2=t3;
    }
    cout<<"\n";
    return 0;
}
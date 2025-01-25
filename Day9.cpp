//Take an integer as the input from the user and then calculate the number of digits in the given input and print it as the output.
#include<iostream>
using namespace std;
int main(){
    int n, count;
    cout<<"Enter the number"<<endl;
    cin>>n;
    count=0;
    int temp=n;
    while (n!=0)
    {
        count++;
        n/=10;

    }
    cout<<"The number of digits in the given number "<<temp<<" is "<<count<<endl;
    
    return 0;
}
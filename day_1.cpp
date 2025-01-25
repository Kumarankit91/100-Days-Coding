#include<iostream>
using namespace std;
int main(){
    char x;
    cout<<"Enter the input"<<endl;
    cin>>x ;
    if(!isalpha(x)){
        cout<<"The input "<<x<<" is invalid"<<endl;
    }
    else if(x=='a' || x=='A' || x=='e' || x=='E' || x=='i'|| x=='I'|| x=='o'|| x=='O'|| x=='u'|| x == 'U'){
        cout<<"The input "<<x<<" is a Vovel"<<endl;
    }
    else{
        cout<<"The input "<<x<<" is consonant"<<endl;
    }
    return 0;
}
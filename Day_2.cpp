#include<iostream>
using namespace std;
int main(){
    char x;
    cout<<"Enter the Character"<<endl;
    cin>>x;
    if((x >='A' & x <='Z')||(x>='a' & x<='z')){
        cout<<x<<" is a alphabet"<<endl;
    }
    else{
        cout<<x<<" is not a alphabet"<<endl;
    }
    return 0;
}
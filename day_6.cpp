#include<iostream>
using namespace std;
int main(){
    int x,y;
    cout<<"Enter the X- coordinate"<<endl;
    cin>>x;
    cout<<"Enter the Y- coordinate"<<endl;
    cin>>y;
    if(x>0 && y>0){
        cout<<"The point lies in 1st Quadrant"<<endl;
    }
    else if(x<0 && y>0){
        cout<<"The point lies in 2nd Quadrant"<<endl;
    }
    else if(x<0 && y<0){
        cout<<"The point lies in 3rd Quadrant"<<endl;
    }
    else if(x>0 && y<0){
        cout<<"The point lies in 4th Quadrant"<<endl;
    }
    else{
        cout<<"The point lies in center"<<endl;
    }
    return 0;
}
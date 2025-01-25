//Get the values of a, b and c (coefficients of quadratic equation) as input from the user and calculate the roots and print as the output
#include<iostream>
#include<cmath>
using namespace std;
int main(){
    float a, b, c;
    cout<<"Enter the Coefficient of x^2"<<endl;
    cin>>a;
    cout<<"Enter the Coefficient of x"<<endl;
    cin>>b;
    cout<<"Enter the constant value"<<endl;
    cin>>c;
    float d, r1, r2, real, imag;
    d=(b*b)-(4*a*c);
    if(d>0){
        cout<<"The Quadratic Equation have two real roots"<<endl;
        r1=(-b + (sqrt(d)))/(2*a);
        r2=(-b - (sqrt(d)))/(2*a);
        cout<<"The roots are = "<<r1<<" and "<<r2<<endl;
    }
    else if(d==0){
        cout<<"The Quadratic Equation have two real and equal roots"<<endl;
        r1=-b/(2*a);
        r2=-b/(2*a);
        cout<<"The roots are = "<<r1<<" and "<<r2<<endl;
    }
    else{
        cout<<"The Quadratic Equation has no real roots"<<endl;
        real=-b/(2*a);
        imag=sqrt(d)/(2*a);
        r1= real + imag;
        r2= real - imag;
        cout<<"The roots are = "<<r1<<" and "<<r2<<endl;
    }
    return 0;
}
#include<iostream>
using namespace std;
#include<cmath>

int main(){
    double p , b , h;
    cout<<"enter the value of p:";
    cin>>p;
    cout<<"enter the value of b:";
    cin>>b;
    h=sqrt(pow(p,2) + pow(b,2));
    cout<<"the value of hypotenuese is: "<<h;

    return 0;
}
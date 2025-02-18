#include<iostream>
using namespace std;
int numSum(int a , int b){
    
    return (a+b);
}
int numSum(int a , int b , int c){
    return (a+b+c);
}
float numSum(float a , float b){
    
    return (a+b);
}
float numSum(float a , float b , float c){
    return (a+b+c);
}
int main(){
    int a,b,c,res1,res2;
    float x,y,z,res3,res4;

    cout<<"enter three integers:";
    cin>>a>>b>>c;

    res1=numSum(a,b);
    cout<<res1<<endl;
    res2=numSum(a,b,c);
    cout<<res2<<endl;
    cout<<"enter three float numbers:";
    cin>>x>>y>>z;

    res3=numSum(x,y);
    cout<<res3<<endl;
    res4=numSum(x,y,z);
    cout<<res4<<endl;
    return 0;
}
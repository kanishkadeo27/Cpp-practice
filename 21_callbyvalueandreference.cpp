#include<iostream>
using namespace std;
// void change1(int n){
//     n=100;
// }
// void change1(int &n){
//     n=100;
// }

// !swapping of two number
void swap(int *a , int *b){
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}
int main(){
    // int num=80;
    // cout<<"num before function call="<<num<<endl;
    // change1(num); //call by value
    // change1(num);  call by reference 
    // cout<<"num after function call="<<num<<endl;

    int m,n;
    cout<<"enter the two numbers to swap:";
    cin>>m>>n;
    cout<<"before swapping m = "<<m<<"and n= "<<n;
    swap(&m,&n);
    cout<<"after swapping m = "<<m<<"and n= "<<n;
    return 0;
}
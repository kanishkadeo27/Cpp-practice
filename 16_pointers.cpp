#include<iostream>
using namespace std;

int main(){
    int num=10; //stores value 
    int *ptr; //pointer variable->store address

    ptr=&num; //store address of num variable

    cout<<"value of num:"<<num<<endl;
    cout<<"value of num:"<<*ptr<<endl;
    cout<<"address of num:"<<ptr<<endl;
    cout<<"address of num:"<<&num<<endl;
    cout<<"value of ptr:"<<ptr<<endl;
    cout<<"address of ptr:"<<&ptr<<endl;

    return 0;
}
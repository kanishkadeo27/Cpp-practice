#include<iostream>
using namespace std;
class Vehicle //base class for fourwheeler class
{
    public:
        
        void Vdisplay(){
            cout<<"Vehicle:parent class for four wheeler"<<endl;
        }
};
class FourWheeler:public Vehicle{ //base class for Car and derived class for vehicle class
    public:
    
        void Fdisplay(){
            cout<<"FourWheeler:parent class for Car"<<endl;
            cout<<"FourWheeler:derived class of Vehicle"<<endl;
        }
};
//derived class
class Car : public FourWheeler{
    public:
        void Cdisplay(){
            cout<<"Car:derived class of FourWheeler"<<endl;
        }
};
int main(){
    Car c1;
    c1.Vdisplay();
    c1.Fdisplay();
    c1.Cdisplay();
    return 0;
}
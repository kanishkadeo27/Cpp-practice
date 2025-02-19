#include<iostream>
using namespace std;
class Base{
    public:
    //runtime polymorphism
        virtual void Display(){
            cout<<endl<<"Display method of base class";
        }
        void Print(){
            cout<<endl<<"Print method of base class";
        }
};
class Derived:public Base{
    public:
        void Display(){
            cout<<endl<<"Display method of derived class";
        }
        void Print(){
            cout<<endl<<"Print method of derived class";
        }
};
int main(){
    Base *b1 , b2;
    b1=&b2;
    b1->Display(); //call base class display method
    b1->Print(); //call base class display method
    Derived d1;
    b1=&d1;
    b1->Display(); //call derived class display method becoz base class display method is virtual
    b1->Print(); //call base class display method coz base class print method is not virtual compiler time it is decided ->early binding

    return 0;
}
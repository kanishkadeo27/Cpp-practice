#include<iostream>
using namespace std;
class Complex{
    private:
        float real , img;
    public:
        Complex(){
            real=0.0;
            img=0.0;
        }
        void input(){
            cout<<"Enter real part of complex number:";
            cin>>real;
            cout<<"Enter imaginary part of complex number:";
            cin>>img;
        }
        Complex operator +(const Complex &obj){
            //obj->c2 and c1 ke through function is called

            Complex temp;
            temp.real = real + obj.real;
            temp.img = img + obj.img;

            return temp;

        }
        void display(){
            cout<<" complex number is:"<<real<<"+"<<img<<"i"<<endl;
        }

};
int main(){
    Complex c1,c2,c3;
    c1.input();
    c2.input();
    c3=c1+c2;
    c3.display();
    return 0;
}
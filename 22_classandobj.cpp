#include<iostream>
using namespace std;
class Rectangle{
    public:
    // data members
       int length , breadth;
    //    member function
    int Area(){
        return length*breadth;
    }
    int Perimeter(){
        return 2*(length+breadth);
    }
};
int main(){
    // object create
    Rectangle R1;
    R1.length=10;
    R1.breadth=90; 
    int area = R1.Area();
    int peri = R1.Perimeter();

    cout<<"area is : "<<area <<" and perimeter is : "<<peri<<endl;


    
    return 0;
}
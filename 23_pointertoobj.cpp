#include<iostream>
using namespace std;
class Rectangle{
    private:
    int length , breadth;
    public:
    // data members
    void input(){

        cout<<"enter the length :";
        cin>>length;
        cout<<"enter the breadth :";
        cin>>breadth;
    }
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
    // Rectangle *R1 = new Rectangle;
    // (*R1).input();
    // R1->input();
    // int area = (*R1).Area();
    // int peri = (*R1).Perimeter();

    
    Rectangle R1 , *ptr;
    ptr=&R1;
    ptr->input();
    int area = ptr->Area();
    int peri = ptr->Perimeter();


    cout<<"area is : "<<area <<" and perimeter is : "<<peri<<endl;
    return 0;
}
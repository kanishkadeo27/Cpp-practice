#include<iostream>
using namespace std;
class Circle{
    private:
        float radius;
    public:
        // !parameterized constructor
        Circle(float R){
            radius=R;
        }
        float Area(){
            return (3.14*radius*radius);
        }
};
int main(){
    Circle c1(7.0);
    cout<<"Area of circle of radius 7.0 :"<<c1.Area()<<endl;
    Circle c2(11.2);
    cout<<"Area of circle of radius 11.2 :"<<c2.Area()<<endl;
    Circle c3(10.5);
    cout<<"Area of circle of radius 10.5 :"<<c3.Area()<<endl;
    return 0;
}
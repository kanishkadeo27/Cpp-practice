#include<iostream>
using namespace std;
class Circle{
    private:
        float radius;
    public:
    //! default constructor
        Circle(){
            radius=7.0;
        }

        float Area(){
            return (3.14*radius*radius);
        }
};
int main(){
    Circle c1;
    cout<<"Area of c1 is:"<<c1.Area();
    return 0;
}
#include<iostream>
using namespace std;
class Student{
    private:
        int roll;
        string name;
        float marks;
    public:        
        // !parameterized constructor
        Student(int R , string N , float M){
            roll=R;
            name=N;
            marks=M;
        }
        // !copy constructor
        Student (Student &s1){
            roll = s1.roll;
            name = s1.name;
            marks = s1.marks;
        }
        // member function
        void Display(){
            cout<<"Roll = "<<roll<<endl;
            cout<<"Name = "<<name<<endl;
            cout<<"marks = "<<marks<<endl;
        }
};
int main(){
    Student st1(1,"rakesh",87.5);
    // st1.Display();

    // Student st2 = st1;
    Student st2(st1);
    st2.Display();

    return 0;
}
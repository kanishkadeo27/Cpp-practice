#include<iostream>
using namespace std;
class Student
{
    public:
        int Roll;
        string Name;
        void input(){
            cout<<"Enter roll number:";
            cin>>Roll;
            cout<<"Enter name:";
            cin>>Name;
        }
        void display(){
            cout<<"The roll number is:"<<Roll<<endl;
            cout<<"The name is:"<<Name<<endl;
        }
};
class Sports:public Student{
    public:
        string GameType;
        // function name can be same for both
        void input(){
            Student::input();
            cout<<"Enter the type of gam:";
            cin>>GameType;
            
        }
        // function name can be different also
        void sDisplay(){
            cout<<"The type of game is:"<<GameType<<endl;
        }
};

int main(){
    Sports st1;
    st1.input();
    // st1.sInput();
    st1.display();
    st1.sDisplay();
    return 0;
}
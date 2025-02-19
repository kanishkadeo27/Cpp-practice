#include<iostream>
using namespace std;
class Student //base class
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
class Sports{ //base class
    public:
        string GameType;
        // function name can be same for both
        void input(){
            cout<<"Enter the type of gam:";
            cin>>GameType;
            
        }
        // function name can be different also
        void display(){
            cout<<"The type of game is:"<<GameType<<endl;
        }
};
//derived class
class Result : public Student , public Sports{
    private :
        int marks;
    public:
        void input(){
            Student::input();
            Sports::input();
            cout<<"Enter the marks:";
            cin>>marks;
        }
        void display(){
            Student::display();
            Sports::display();
            cout<<"The marks are:"<<marks<<endl;
        }
};
int main(){
    Result st1;
    st1.input();
    st1.display();
    return 0;
}
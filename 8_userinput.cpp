#include<iostream>
using namespace std;

int main(){
    string name;
    int age ;
    cout<<"what is your age ?:";
    cin >>age;
    
    cout<<"what is your full name?:";
    getline(cin >> std::ws,name);

    cout<<"hello " << name <<'\n';
    cout<<"you are "<<age<<" years old";
    return 0;
}
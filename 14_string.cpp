#include<iostream>
#include<string>
using namespace std;

int main(){
    // char grade;
    // string name;
    // // char grade='A';
    // // string name="amit";

    // cout<<"enter the name of student:";
    // // cin>>name;
    // getline(cin,name);
    // cout<<"enter the grade of student:";
    // cin>>grade;

    // cout<<"the grade of "<<name<<" is "<<grade;


    // !operations with string
    int a=90,b=30;
    string str1="hello" , str2="world";

    cout<<endl<<(a+b);//add
    cout<<endl<<(str1+str2);// concatenation


    // replacing any char in string
    str1[0]='c';
    cout<<endl<<str1<<endl;

    //length of string
    cout<<"length of str1 is:"<<str1.length()<<endl;

    return 0;
}
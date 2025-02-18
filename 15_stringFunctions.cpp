#include<iostream>
#include<cstring>

using namespace std;

int main(){
    // substr()
    string str1="hello everyone from kanishka" , str2="world is a beautiful place";
    string str3;
    str3=str1.substr(4,7);
    // cout<<str3;
    
    // strcat_s()
        char str4[100]="hello everyone from kanishka";
        char str5[50]="world is a beautiful place" ;
    strcat(str4,str5);
    // cout<<str4;
    
    
    // strcmp()
    // char str6[100]="ABC",str7[50]="ABC";
    // int res = strcmp(str6,str7);
    // cout<<res;

    // strcpy_s()
    char str6[100]="C++ programming language",str7[100]="abc";
    strcpy(str7,str6);
    cout<<str7;
    // strlen()
    return 0;
}
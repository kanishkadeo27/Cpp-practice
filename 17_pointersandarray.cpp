#include<iostream>
using namespace std;

int main(){
    char grade[5]={'A','B','C','D','E'}; //internally declared an constant array pointer with name grade->it displays the value of first value
    // cout<<grade; //display full array
    // grade++; error->expression must be a modifiable value
    // cout<<*grade; //display first element


    // !ways to display array elements
    // base address=1000
    // for (int i = 0; i < 5; i++)
    // {
    //     cout<<grade[i]<<" "; //*(grade+i)
    //     cout<<i[grade]<<" "; //*(i+grade)
    //     cout<<*(grade+i)<<" ";
    //     cout<<*(i+grade)<<" ";
    // }


    //execution becomes faster 
    char *ptr;
    ptr = grade; //no need to write &
    for (int i = 0; i < 5; i++)
    {
        cout<<*ptr<<" ";
        ptr++;
        
    }
    return 0;
}
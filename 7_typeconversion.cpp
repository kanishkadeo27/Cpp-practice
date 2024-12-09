#include<iostream>
using namespace std;

int main(){
    int x = 3.14; //implicit
    cout<<x<<endl;
    double y = (int) 3.14;
    cout<<y<<endl;
    std::cout<<(char)100<<endl;


    int correct = 8;
    int questions = 10;
    double score = correct/(double)questions *100;
    cout<<score<<"%";
    return 0;
}
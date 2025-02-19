#include<iostream>
using namespace std;
class Number
{
private:
    int N;
public:
    Number(){
        N=2;
    }
    friend int MultiplyByTen(Number n1);
    void display(){
        cout<<"N="<<N<<endl;
    }
};
// function
int MultiplyByTen(Number n1){
    n1.N = n1.N * 10;
    return n1.N;
}



int main(){
    Number n;
    n.display();
    cout<<"N after function call="<<MultiplyByTen(n);
    return 0;
}
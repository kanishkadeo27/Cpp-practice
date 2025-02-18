#include<iostream>
using namespace std;

// ! no argument and return value
// if you want to declare the function after the main function then you have to declare it before it
// void evenOdd();
void evenOdd(){
    int n;
    cout<<"Enter the number:";
    cin>>n;

    if (n%2==0)
    {
        cout<<n<<" is even";
    }
    else
    {
        cout<<n<<" is odd";
    }
    
}
// ! with argument but no return value
void evenOdd(int num){
    if (num%2==0)
    {
        cout<<num<<" is even";
    }
    else
    {
        cout<<num<<" is odd";
    }
    
}
// ! without argument but return value
int factorial(){
    int fact=1 , N , i;
    cout<<"Enter the number:";
    cin>>N;

    for ( i = 1; i <= N; i++)
    {
        fact=fact*i;
    }
    return fact;
    
}
// ! with argument and return value
int factorial(int fact,int N){
    for ( int i = 1; i <= N; i++)
    {
        fact=fact*i;
    }
    return fact;
    
}

int main(){
    // evenOdd();

    // int n;
    // cout<<"Enter the number:";
    // cin>>n;
    // evenOdd(n);

    // int factorialRes = factorial();
    // cout<<factorialRes;
    
    int fact=1 , N , i;
    cout<<"Enter the number:";
    cin>>N;
    int factorialRes = factorial(fact,N);
    cout<<factorialRes;
    
    return 0;
}
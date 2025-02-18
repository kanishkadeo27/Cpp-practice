#include<iostream>
using namespace std;

int main(){
    //!dynamic memory allocation: new and delete
    // int num[100]; //memory is wasted if you enter less number or if you want to enter more numbers then it becomes a prblm->wastage or shortage of memory
    int *num, i , n  , sum=0;
    cout<<"How many numbers you want to add??";
    cin>>n;
    num = new int[n]; //dynamic allocation

    
    for ( i = 0; i < n; i++)
    {
        cout<<"Enter number "<<i+1<<":";
        cin>>*(num+i);
        
        sum=sum+num[i];
        
    }
    cout<<"The sum of all numbers is:"<<sum;
    delete num; 
    return 0;
}
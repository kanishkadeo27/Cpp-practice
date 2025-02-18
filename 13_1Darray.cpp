#include<iostream>
using namespace std;

int main(){
    // int num[5]={23,45,67,12,3};
    //!first method to access elements
    // cout<<num[0]<<endl;
    // cout<<num[1]<<endl;
    // cout<<num[2]<<endl;
    // cout<<num[3]<<endl;
    // cout<<num[4]<<endl;
    //! cout<<num[5]<<endl; print garbage value
    
    // ! second method
    // for (int i = 0; i < sizeof(num)/sizeof(num[0]); i++)
    // {
        //     cout<<num[i]<<endl;
        //     ;
        // }
        
        
    // ! taking user input and displaying them
    // int num[5];
    
    // for (int i = 0; i < sizeof(num)/sizeof(num[0]); i++)
    // {
    //     cout<<"enter number "<<i+1<<":";
    //     cin>>num[i];
    //     ;
    // }

    // for (int i = 0; i < sizeof(num)/sizeof(num[0]); i++)
    // {
    //         cout<<num[i]<<endl;
    //     }
    

    // ! taking inputs from user and give output for the greatest number among all the entered numbers

    int num[100],i , n , max=0 , sum=0;

    cout<<"How many numbers you want to enter??";
    cin>>n;
    
    for ( i = 0; i < n; i++)
    {
        cout<<"Enter number "<<i+1<<":";
        cin>>num[i];
        if (num[i]>max)
        {
            max=num[i];
        }
        sum=sum+num[i];
        
    }
    cout<<"The greatest number is:"<<max<<endl;
    cout<<"The sum of all numbers is:"<<sum;

    return 0;
}
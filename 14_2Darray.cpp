#include<iostream>
using namespace std;

int main(){
    // int num[3][2]={2,3,3,5,7,8};
    // int num[3][2]={{2,3},{3,5},{7,8}};
    // int num[3][2]={};

    // !taking user input
    // for (int i = 0; i < 3; i++)
    // {
    //     for (int j = 0; j < 2; j++)
    //     {
    //         cout<<"enter the value of "<<i<<j<<":";
    //         cin>>num[i][j];
    //     }        
    // }

    // !displying 2d array
    // for (int i = 0; i < 3; i++)
    // {
    //     for (int j = 0; j < 2; j++)
    //     {
    //         cout<<num[i][j]<<" ";
    //     }
    //     cout<<endl;
        
    // }

    // !program to perform sum of two 2d array
    int row,col;
    cout<<"enter the value of row and column";
    cin>>row>>col;
    int num1[row][col]={};
    int num2[row][col]={};
    int sum[row][col]={};


    // !taking user input
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << "enter the value of " << i << j << " for matrix 1:";
            cin>>num1[i][j];
        }        
    }
    // !taking user input
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << "enter the value of " << i << j << " for matrix 2:";
            cin>>num2[i][j];
            sum[i][j]=num1[i][j]+num2[i][j];
        }        
    }

    // !displying sum array
    cout<<"sum of num1 and num2"<<endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout<<sum[i][j]<<" ";
        }
        cout<<endl;
        
    }

    
    return 0;
}
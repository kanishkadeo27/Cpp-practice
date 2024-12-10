#include <iostream>
using namespace std;

int main()
{
    // if statement
    // int a;
    // cout << "enter the number:";
    // cin >> a;

    // if (a < 0)
    // {
    //     a = -a;
    // }
    // cout << endl
    //      << "a= " << a;

    // if else statement
    // int x ,y;
    // cout<<"enter two numbers:";
    // cin>> x>>  y;
    //     if (
    //         x>y
    //     )
    //     {
    //         cout<<x<<"is greater";
    //     }
    //     else{
    //         cout<<y<<" is greater";
    //     }

    // if else if ladder
    //  float amt , disc , totalDisc;
    //  cout<<"enter the amt: ";
    //  cin>>amt;
    //  if (amt<=1000)
    //  {
    //      disc=10;
    //  }
    //  else if(1000<amt<=2000)
    //  {
    //      disc=20;
    //  }
    //  else if(2000<amt<=3000)
    //  {
    //      disc=30;
    //  }
    //  else{
    //      disc=40;
    //  }
    //  totalDisc=(amt*disc)/100;
    //  cout<<"the amt is "<<amt<<"and you got "<<totalDisc <<" discount";

    // nested if statement
    // int x,y;
    // cout<<"enter two numbers:";
    // cin>>x>>y;

    // if (x!=y)
    // {
    //     if (x>y)
    //     {
    //         cout<<x<<" is greater";
    //     }
    //     else{
    //         cout<<y<<" is greater";
    //     }
    // }
    // else{
    //     cout<<x<<" and "<<y<<" are equal";
    // }

    // switch case
    // int n;
    // cout<<"enter the value of n:";
    // cin>>n;

    // switch (n)
    // {
    // case 1:
    //     cout<<"one";
    //     break;
    // case 2:
    //     cout<<"two";
    //     break;
    // case 3:
    //     cout<<"three";
    //     break;
    // case 4:
    //     cout<<"four";
    //     break;
    // case 5:
    //     cout<<"five";
    //     break;
    // case 6:
    //     cout<<"six";
    //     break;
    // case 7:
    //     cout<<"seven";
    //     break;
    // case 8:
    //     cout<<"eight";
    //     break;
    // case 9:
    //     cout<<"nine";
    //     break;
    // default:
    // cout<<"not a single digit number";
    //     break;
    // }

    // program to check whether the given number is even or odd
    // int num;
    // cout<<"ehter the number:";
    // cin>>num;

    // if (num%2==0)
    // {
    //     cout<<num<<" is even";
    // }
    // else{
    //     cout<<num<<" is odd";
    // }

    // program to check whether the given year is leap year or not
    int year;
    cout << "enter the year to check:";
    cin >> year;
    if ((year % 4) == 0)
    {
        if ((year % 100) == 0)
        {
            if (year % 400 == 0)
            {
                cout << year << " is a leap year";
            }
            else
            {
                cout << year << " is not a leap year";
            }
        }
        else
        {
            cout << year << " is a leap year";
        }
    }

    else
    {
        cout << year << " is not a leap year";
    }

    return 0;
}
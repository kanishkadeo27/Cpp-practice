#include <iostream>
using namespace std;

int main()
{
    // int x=1;
    // while (x<10)
    // {
    //     cout<<"the value of x is "<<x<<endl;
    //     x++;
    // }

    // int n , fact=1 , i=1;
    // cout<<"enter the number:";
    // cin>>n;

    // while (i<=n)
    // {
    //     fact=fact*i;
    //     i++;
    //     // cout<<i;
    // }

    // cout<<"factorial of "<<n<<" is "<<fact;

    // do while loop
    //  int n , i=1;
    //  cout<<"enter the number:";
    //  cin>>n;
    //  do{
    //      cout<<"i:"<<i<<endl;
    //      i++;
    //  }while (i<n);

    // int n, fact = 1, i = 1;
    // cout << "enter the number:";
    // cin >> n;
    // do
    // {
    //     fact = fact * i;
    //     i++;
    // } while (i <= n);

    //    cout << "factorial of " << n << " is " << fact;

    // for loop
    // int n ;
    // cout<<"enter the number:";
    // cin>>n;
    // for (int i = 1; i < n; i++)
    // {
    //     cout<<"hello world"<<endl;
    // }

    int n, i, flag = 0;
    cout << "enter the number to check:";
    cin >> n;
    for (int i = 2; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            if (n % i == 0)
            {
                flag = 1;
                break;
            }
        }
    }
    if (flag==0)
    {
        cout<<n<<" is prime";
    }
    else{
        cout<<n<<" is not prime";
    }
    

    return 0;
}
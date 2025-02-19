#include<iostream>
using namespace std;
class Distance{
    private:
        int KM , M;
    public:
        void input(){
            cout<<"Enter Km:";
            cin>>KM;
            cout<<"Enter M:";
            cin>>M;
        }
        void operator --(){
            --KM;
            --M;
        }
        void display(){
            cout<<" Km is:"<<KM<<endl;
            cout<<" M is:"<<M<<endl;
        }

};
int main(){
    Distance d1;
    d1.input();
    cout<<"KM and M before decrement:"<<endl;
    d1.display();
    cout<<"KM and M after decrement:"<<endl;
    --d1;
    d1.display();


    return 0;
}
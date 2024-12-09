#include<iostream>
#include<vector>
using namespace std;

// typedef std::vector<std::pair<std::string,int>> pairlist_t;
// typedef std::string text_t;
// typedef int number_t;

using text_t = std::string;
using number_t = int;
int main(){
    // pairlist_t pairlist;
    text_t firstname = "kanishka";
    cout << firstname<<endl;

    number_t age =22;
    cout<<age<<endl;
    return 0;
}
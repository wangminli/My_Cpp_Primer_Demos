#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int main()
{
    string str;
    cin>>str;
    str.erase(unique(str.begin(),str.end()),str.end());
    //str.resize(unique(str.begin(),str.end())-str.begin());
    cout<<str<<endl;
    return 0;
}
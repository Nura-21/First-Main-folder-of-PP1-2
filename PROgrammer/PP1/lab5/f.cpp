#include <iostream>
using namespace std;
int main(){
    int l,r;
    string str;
    cin>>str>>l>>r;
    int n=str.size();
    for(int i=l;i<=r;++i)
    {
        cout<<str[i];
    }
    return 0;
}
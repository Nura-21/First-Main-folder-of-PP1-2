#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int n;
    cin>>n;
    string s[n],g[n];
    for(int i=0;i<n;++i)
    {
        cin>>s[i];
    }
    for(int i=0;i<n;++i)
    {
    g[i]=s[i];
    reverse(g[i].begin(),g[i].end());
    if(g[i]==s[i])  {cout<<"YES"<<endl;}
    else    {cout <<"NO"<< endl;}
    }
}
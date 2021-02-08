#include <iostream>
#include <bits/stdc++.h> 
using namespace std;
int main()
{
    string s;
    cin>>s;
    int l=s.size();
    int n=l+1;
    s.resize(n);
    s[n-1]=s[0];
    string g=s;
    reverse(g.begin(),g.end());
    if(g==s){cout<<"YES"<<endl;}
    else{cout<<"NO"<<endl;}
    return 0;
}
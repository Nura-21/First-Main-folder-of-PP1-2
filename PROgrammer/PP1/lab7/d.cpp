#include <bits/stdc++.h>  
using namespace std;  
int che(string s,int l,int i,int n)
{   if(i==l) {return n;}
    n+=int(s[i]-'0');
    return che(s,l,i+1,n);
} 
int main()  
{  
    string s;
    cin>>s;
    int l=s.size();
    cout<<che(s,l,0,0);
}  
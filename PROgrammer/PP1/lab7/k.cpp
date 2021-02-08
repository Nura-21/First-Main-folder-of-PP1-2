#include <bits/stdc++.h>  
using namespace std; 
int mx(string s,int l, int i,int m)
{   
    if(l==1){return int(s[0]-'0');}
    if(l==i){return m;}
    if( m<int(s[i]-'0') ){m=int(s[i]-'0');return mx(s,l,i+1,m);}
    return mx(s,l,i+1,m);
}
int main()
{
    string s;
    cin>>s;
    int l=s.size();
    int m;
    cout<<mx(s,l,0,-1)<<endl;
}
#include <bits/stdc++.h>
using namespace std;
string res(int n,string s)
{   if(n==0) return s;
    return res(n/2,char(n % 2+48)+s);
}

int main(){
    int n; 
    cin>>n;
    cout<<res(n,"");
}
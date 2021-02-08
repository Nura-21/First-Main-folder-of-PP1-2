#include <bits/stdc++.h>
using namespace std;
string res(int n,string s,int k)
{   if(n%k<10){if(n==0) return s;
    return res(n/k,char(n % k+48)+s,k);}
    if(n==0) return s;
    return res(n/k,char(n % k+55)+s,k);
}
int main(){
    int n;  int k;
    cin>>n>>k;
    cout<<res(n,"",k);
}
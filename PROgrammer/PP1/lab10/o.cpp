#include <bits/stdc++.h>
using namespace std;
string s="";
string f(int x,string s)
{   if(x==0) return s;
    return f(x/2,char(x % 2+48)+s);
}
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;++i){
        cin>>a[i];
        for_each(a,a+n,f);
    }
    for(int i=0;i<n;++i){
        cout<<a[i]<<endl;
    }

}
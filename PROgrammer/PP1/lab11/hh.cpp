#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    for(int i=0;i<s.size();++i){
        if(s[i]+n>'Z'){s[i]=s[i]-26+n;}
        else s[i]=s[i]+n;
    }
    cout<<s;
}
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    int j=1;
    int cnt=0;
    while(j<n){
    for(int i=j;i<s.size();++i){
        if( i-j>=1 && i+j<=n)
            {
                if(s[i]==s[i-j] && s[i]==s[i+j] && s[i-j]==s[i+j]){cnt++;}
            }
        }
    ++j;
    }
    cout<<cnt<<endl;
}
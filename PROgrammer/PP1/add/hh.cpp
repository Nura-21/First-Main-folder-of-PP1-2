#include <bits/stdc++.h> 
#include <iostream>
using namespace std; 
int main(){
    string s;
    cin>>s;
    string g;
    cin>>g;
    for(int i=0;i<g.size();++i){
        if(int(s[0])==int(g[i])){g.erase(i,1);
        }
    }
    cout<<g;
    return 0;
}
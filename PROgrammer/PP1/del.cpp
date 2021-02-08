#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    vector<string> v;
    string g="";
    for(int i=0;i<s.size();++i){
        if(i+1==s.size()){g+=s[i];};
        if(s[i] == ' ' || i+1==s.size()){
            v.push_back(g);
            g="";
        }
        else{g+=s[i];}
    }
    int mn=INT16_MAX;
    int minid=0;
    string an;
    vector<string> ans;
    for(int i=0;i<v.size();++i){
        int vs=v[i].size();
        if(vs<=mn){mn=vs;ans.push_back(v[i]);}
    }
    for(int i=0;i<ans.size();++i){
        cout<<ans[i];
    }
}
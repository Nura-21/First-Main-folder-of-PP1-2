#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    vector<string> v;
    string g="";
    for(int i=0;i<s.size();++i){
        if(s[i] == ' ' || i+1==s.size()){
            v.push_back(g);
            g="";
        }
        else{g+=s[i];}
    }
    map<string,int> m;
    map<string,int> :: iterator it;
    for(int i=0;i<v.size();++i){
        m[v[i]]++;
    }
    vector<pair<string,int>> vec;
    for(it=m.begin();it!=m.end();++it){
        vec.push_back(make_pair(it->first,it->second));
    }
    sort(vec.begin(),vec.end(),greater<pair<string,int>>());
    for(int i=0;i<vec.size();++i){
        cout<<vec[i].first<<" : "<<vec[i].second<<endl;
    }
}
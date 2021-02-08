#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    map<pair<pair<string,int>,pair<string,int> >, int> m;
    for(int i=0;i<n;++i){
        string s1,s2;
        int k1,k2;
        cin>>s1>>k1>>s2>>k2;
        m[make_pair(make_pair(s1,k1),make_pair(s2,k2))]=k1+k2;
    }
   map<pair<pair<string,int>,pair<string,int> >, int> :: iterator it;
    for(it=m.begin();it!=m.end();++it){
        cout<<it->first.first.first<<" and "<<it->first.second.first<<" "<<it->second<<endl;
    }
}
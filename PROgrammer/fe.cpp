#include <bits/stdc++.h>
using namespace std;
int main(){
    int n; cin>>n;
    set<string> begf;
    for(int i=0; i<n; i++){
        string s; cin >> s;
        begf.insert(s);
    }
    int m; cin>>m;
    vector<pair<string,string>> vec;
    set<string> res;
    for(int i=0; i<m; i++){
        string a,b; cin>>a>>b;
        vec.push_back(make_pair(a,b));
    }
    string my;cin>>my;
    for(int i=0;i<vec.size();++i){
        if(begf.count(vec[i].second) && vec[i].first==my)
        {
            res.insert(vec[i].second);
        }
        else if(begf.count(vec[i].first) && vec[i].second==my)
        {
            res.insert(vec[i].first);
        }
    }
    cout<<res.size()<<endl;
    set<string> :: iterator it;
    for(it=res.begin();it!=res.end();++it){
        cout<<*it<<" ";
    }
}
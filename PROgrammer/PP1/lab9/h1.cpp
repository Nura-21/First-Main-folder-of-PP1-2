#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    set<int> s;
    vector<string> v;
    for(int i=0;i<n;++i){
        int x;
        cin>>x;
        s.insert(x);
    }
    set<int> :: iterator it;
    for(it=s.begin();it!=s.end();++it){
        v.push_back(string(*it));
    }
    int oper=0;
    vector<string> v2;
    v2=v1;
    for(int i=1;i<v.size();++i){
        if(v[i]-1==v[i-1]){oper++;
        if(oper>2){v[i]="...";}
        }
    }
}
#include <bits/stdc++.h>
using namespace std;
int main(){
    pair<int,int> p;
    int px,py;
    cin>>px>>py;
    make_pair(px,py);
    int n;
    cin>>n;
    vector<pair<int,int>> v(n);
    for(int i=0; i<n ;++i){
        int x,y;
        cin>>x>>y;
        v.push_back(make_pair(x,y));
    }
    sort(v.begin(),v.end(),greater<pair<int,int>>());
    for(int i=0; i<v.size() ;++i){
        cout<<v[i].first<<" "<<v[i].second<<endl;
    }
}

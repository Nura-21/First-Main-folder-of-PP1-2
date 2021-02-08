#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> v(n);
    multiset<int> s;
    for(int i=0;i<n;++i){
        cin>>v[i];
    }
    vector<int> v2;
    v2=v;
    sort(v2.begin(),v2.end());
    int cnt=0;
    for(int i=0;i<n;++i){
        if(v[i] != v2[i]){cnt++;}
    }
    cout<<cnt;
}   
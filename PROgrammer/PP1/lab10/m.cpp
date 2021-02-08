#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    vector<int> v1(n);
    vector<int> v2(m);
    for(int i=0;i<n;++i){
        cin>>v1[i];
    }
    for(int i=0;i<m;++i){
        cin>>v2[i];
    }
    vector<int> nv(n+m-2);
    for(int i=0;i<n+m-2;++i){
        nv[i]=v1[i];
        nv[i+1]=v2[i];
    }
    for(int i=0;i<n+m-2;++i){
        cout<<nv[i]<<" ";
    }

}
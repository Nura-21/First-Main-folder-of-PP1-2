#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;++i){
        cin>>a[i];
    }
    int m;
    cin>>m;
    vector<int> v(m);
    for(int i=0;i<m;++i){
        cin>>v[i];
    }
    vector<int> vec;
    for(int i=0;i<n;++i){
        for(int j=0;j<n;++i){
            vec.push_back(a[i]+a[j]);
        }
    }
    vector<int> ans;
    for(int i=0;i<m;++i){
        if(vec[i]==v[i]){ans[i]++;}
    }
    
}
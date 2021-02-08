#include <bits/stdc++.h>  
#include <algorithm>  
using namespace std; 
int main(){
    int n;
    cin>>n;
    int x;
    vector<int> v(n);
    for(int i=0;i<v.size();++i){
        cin>>v[i];
    }
    cin>>x;
    sort(v.begin(),v.end());
    for(int i=0;i<x;++i){
        cout<<v[i]<<" ";
    }
}

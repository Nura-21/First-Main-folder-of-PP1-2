#include <bits/stdc++.h>  
#include <algorithm>  
using namespace std; 
int main(){
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;++i){
        cin>>v[i];
    }
    int a;
    cin>>a;
    v.erase(v.begin()+a);
    for(int i=0;i<v.size();++i){
        cout<<v[i]<<" ";
    }
}
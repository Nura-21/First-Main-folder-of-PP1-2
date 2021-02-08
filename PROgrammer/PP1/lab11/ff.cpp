#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,m,k;
    cin>>n>>m>>k;
    vector<int> v;
    for(int i=1;i<=max(n,m);++i){
        if(n%i==0 && m%i==0){v.push_back(i);}
    }
    reverse(v.begin(),v.end());
    /*for(int i=0;i<v.size();++i){
        cout<<v[i]<<" ";
    }*/
    cout<<v[k-1];
}
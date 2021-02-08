#include <bits/stdc++.h>
using namespace std;
int main(){
    int n1,n2;
    cin>>n1;
    vector<int> v(n1+n2);
    for(int i=0;i<n1;++i){
        cin>>v[i];
    }
    cin>>n2;
    for(int i=n1;i<n2;++i){
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    for(int i=0;i<n2;++i){
        cout<<v[i]<<" ";
    }
}
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n; cin>>n;
    int l,r;
    cin>>l>>r;
    vector<int> v(n);
    for(int i=0;i<n;++i){
        cin>>v[i];
    }
    reverse(v.begin()+l-1,v.begin()+r);
    for(int i=0;i<n;++i){
        cout<<v[i]<<" ";
    }
}
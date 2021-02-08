#include <bits/stdc++.h>
using namespace std;
int main(){
    int n1,n2;
    cin>>n1;
    vector<int> v;
    for(int i=0;i<n1;++i){
        int x1;
        cin>>x1;
        v.push_back(x1);
    }
    cin>>n2;
    for(int i=n1;i<n2+n1;++i){
        int x2;
        cin>>x2;
        v.push_back(x2);
    }
    sort(v.begin(),v.end());
    for(int i=0;i<n2+n1;++i){
        cout<<v[i]<<" ";
    }
}
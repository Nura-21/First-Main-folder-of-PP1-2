#include <bits\stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> v;
    for(int i=0;i<n;++i){
        int x;
        cin>>x;
        v.emplace(0,x);
    }
    for(int i=0;i<n;++i){
        cout<<v[i]<<" ";
    }
}
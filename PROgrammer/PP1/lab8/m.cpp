#include <bits/stdc++.h>  
#include <algorithm>  
using namespace std;
int main(){
    int n;
    cin>>n;
    set<int> s;
    for(int i=0;i<n;++i){
        int x;
        cin>>x;
        s.insert(x);
    }
    int cnt=0;
    set<int>:: iterator it;
    for(it=s.begin();it!=s.end();++it){
        cnt+=*it;
    }
    cout<<cnt;
}
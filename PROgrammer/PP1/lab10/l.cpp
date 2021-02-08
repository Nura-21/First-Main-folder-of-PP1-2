#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int nwn=(1+n)*n/2;
    vector<int> v(nwn);
    int cnt=0;
    for(int i=1;i<=n;++i){
        fill(v.begin()+cnt,v.end()+cnt+i,i);
        cnt+=i;
    }
    for(int i=0;i<v.size();++i){
        cout<<v[i]<<" ";
    }

}
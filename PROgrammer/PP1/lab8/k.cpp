#include <bits/stdc++.h>  
#include <algorithm>  
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<v.size();++i){
        cin>>v[i];
    }
    int x;
    cin>>x;
    sort(v.begin(),v.end());
    int sum=0;
    for(int i=v.size()-x;i<v.size();++i){
        sum+=v[i];
    }
    cout<<sum<<endl;
}
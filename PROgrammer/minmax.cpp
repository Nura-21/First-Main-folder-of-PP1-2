#include <bits\stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;++i){
        cin>>v[i];
    }
    auto mn = min_element(v.begin(),v.end());
    cout<<*mn;
    auto mx = max_element(v.begin(),v.end());
    cout<<*mx;
    auto mnx = minmax_element(v.begin(),v.end());
    cout<<*mnx.first<<" "<<*mnx.second;
}
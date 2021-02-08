#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<pair<int,int>> mp;
    for(int i=0;i<n;++i){
        int a,b;
        cin>>a>>b;
        mp.push_back(make_pair(a+b,i+1));
    }
    sort(mp.begin(),mp.end());
    for (int i=0; i<n; i++) 
    { 
        cout<< mp[i].second <<" ";
    } 
}

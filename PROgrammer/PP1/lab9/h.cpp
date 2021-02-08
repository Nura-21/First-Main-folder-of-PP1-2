#include<iostream>
#include<map>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<pair<string,int>> v;
    for(int i=0;i<n;++i){
        string s;
        cin>>s;
        v.push_back(make_pair(s,i+1));
    }
    for(int i=0;i<n;++i){
        cout<<v[i].first<<" "<<v[i].second<<endl;
    }
}
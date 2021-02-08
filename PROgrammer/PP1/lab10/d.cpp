#include <bits/stdc++.h>
using namespace std;
int main(){
    int en;
    cin>>en;
    vector<vector<int>> v(en);
    for(int i=0;i<en;++i){
        int k;
        cin>>k;
        vector<int> v1(k);
        for(int j=0;j<k;++j){
            cin>>v1[i];
        } 
        v.push_back(v1); 
    }
    for(int i=0;i<en;++i){
        for(int j=0;j<v[i].size();++j){
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
}
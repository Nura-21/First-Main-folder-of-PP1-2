#include <bits\stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<vector<int>> v;
    for(int i=0;i<n;++i){
        vector<int> v2;
        for(int j=0;j<n;++j){
            int x;
            cin>>x;
            v2.push_back(x);
        }
        v.push_back(v2);
    }
    for(int i=0;i<n;++i){
         for(int j=0;j<n;++j){
            cout<<v[i][j]<<" ";
         }
         cout<<endl;
    }
}
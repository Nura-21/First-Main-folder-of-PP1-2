#include <bits\stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;++i){
        cin>>v[i];
    }
    while (next_permutation(v.begin(),v.end())){
        for(int i=0;i<v.size();++i){
            cout<<v[i]<<" ";
        }
        cout<<endl;
    }
}
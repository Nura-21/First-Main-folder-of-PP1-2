#include <bits/stdc++.h>
using namespace std;
int main(){
    int n; cin>>n;
    vector<int> vec(n);
    int cnt=0;
    int mx=-212121;
    for(int i=0;i<n;i++){
        cin>>vec[i];
    } 
    for(int i=n-1; i>=0;i--){
        if(mx<vec[i]){
            mx=vec[i];
            cnt++;
        }
    }
    cout<<cnt<<endl;
}
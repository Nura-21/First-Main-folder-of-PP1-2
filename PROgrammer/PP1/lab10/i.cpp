#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> v1(n);
    vector<int> v2(n);
    for(int i=0;i<n;++i){
        cin>>v1[i];
        v2[i]=v1[i];
    }
    reverse(v1.begin(),v1.end());
    for(int i=0;i<v1.size();++i){
        if(v1[i]!=v2[i]){
        cout<<"Instead of "<<v2[i]<<" here was "<<v1[i]<<endl;}
        else{cout<<"OK"<<endl;}
    }
    
}
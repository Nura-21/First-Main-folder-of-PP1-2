#include <bits/stdc++.h>
using namespace std;
bool isp(int n){
    int del=0;
    for(int i=1;i<=n;++i){
        if(n%i==0){del++;}
    }
    if(del>2) return false;
    else return true;
}
int main(){
    int n;
    cin>>n;
    vector<int> allp;
    for(int i=2;i<7919;++i){
        if(isp(i)){allp.push_back(i);}
    }
    cout<<allp[n];
}
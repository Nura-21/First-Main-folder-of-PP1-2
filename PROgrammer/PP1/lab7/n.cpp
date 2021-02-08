#include <bits/stdc++.h>  
using namespace std; 
int ch(int * a,int n, int k, int i){
    if(abs(a[i+1]-a[i]) <= k) {return 1;}
    if(i==n){return 0;}
    return ch(a,n,k,i+1);
}
int main(){
    int n;  int k;
    cin>>n>>k;
    int a[n];
    for(int i=0;i<n;++i){
        cin>>a[i];
    }
    sort(a,a+n);
    if(ch(a,n,k,0)==1){cout<<"cheater"<<endl;}
    else{cout<<"no"<<endl;}
}
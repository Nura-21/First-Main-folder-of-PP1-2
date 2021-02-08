#include <bits/stdc++.h>  
#include <algorithm>  
using namespace std; 
bool isPrime(int x){
    if(x == 1) return  false;
    bool res = true;
    for(int i = 2; i * i <= x; ++i){
        if(x % i == 0){
            res = false;
            break;
        }
    }
    return  res;
}
int main(){
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;++i){
        cin>>v[i];
    }
    int k;
    cin>>k;
    int cnt=0;
    for (int i = 0; i < n; ++i) {
        if(isPrime(v[i]) && k <= v[i]){
            cnt++;
        }
    }
    cout<<cnt;
}
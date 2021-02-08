#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    int k;
    cin>>k;
    for(int i=0;i<n;++i){
        cin>>a[i];
    }
    rotate(a,a+k,a+n);
    reverse(a,a+n);
    for(int i=0;i<n;++i){
        cout<<a[i]<<" ";
    }
    
}
// 2 1 5 4 3 >> 3 4 5 1 2 >> 1 2 3 4 5
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n; cin>>n;
    vector<int> vec(n);
    int ans=0,mx=INT_MIN;
    for(int i = 0; i < n; i++) 
    {
        cin >> vec[i];
    }
    for(int i = n-1; i >= 0; i--){
        if(mx < arr[i]){
            ans++;
            mx = arr[i];
        }
    }
    cout << ans;
}
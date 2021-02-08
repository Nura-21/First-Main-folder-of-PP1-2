#include <bits/stdc++.h>
using namespace std;
int main(){
    //freopen("input.txt", "r", stdin);
    vector <int> v;
    int a;
    cin >> a;
    while(a--){
        int b;
        cin >> b;
        v.push_back(b);
        
    }
    int cnt=0; int mx=INT_MIN;
    for(int i=a-1;i>=0;--i){
        if(mx<v[i]){cnt++;mx=v[i];}
    }
    cout<<cnt;
}
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int a[n][m];
    for(int i=0;i<n;++i){
        for(int j=0;j<m;++j){
            cin>>a[i][j];
        }
    }
    if(n<2 && m<2){cout<<"YES";return 0;}
    bool ok=true;
    for(int i=0;i<n;++i){
        for(int j=0;j<m;++j){
            if(a[i][j]==0 && a[i+1][j]==0 && a[i+1][j+1]==0 && a[i][j+1]==0 || a[i][j]==1 && a[i+1][j]==1 && a[i+1][j+1]==1 && a[i][j+1]==1){
                ok=false;break;
            }
            else ok=true;
        }
        if(ok==false){break;}
    }
    if(ok){cout<<"YES"<<endl;}
    else{cout<<"NO"<<endl;}
}
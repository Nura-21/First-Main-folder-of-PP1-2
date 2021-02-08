#include <bits\stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    char a[n][n];
    for(int i=0;i<n;++i){
        for(int j=0;j<n;++j){
            if(i==j){a[i][j]='L';}
            else{a[i][j]='N';}
        }
    }
    for(int i=0;i<n;++i){
        for(int j=0;j<n;++j){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
}
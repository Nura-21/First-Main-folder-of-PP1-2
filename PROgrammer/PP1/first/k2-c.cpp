#include <iostream>
using namespace std; 
int main(){
    int n;
    cin>>n;
    int a[n][n];
    int m=0;
    while(m < n){
    for(int i=0;i<n;++i){
        for(int j=0;j<n;++j){
            if(i==m){a[i][j]=2*m+1;}
        }
    }
    ++m;
    }
    for(int i=0;i<n;++i){
        for(int j=0;j<n;++j){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
}
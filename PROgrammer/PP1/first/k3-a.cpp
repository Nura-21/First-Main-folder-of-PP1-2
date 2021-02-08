#include <iostream>
using namespace std; 
int main(){
    int n,m;
    cin>>n>>m;
    char a[n][m];
    for(int i=0; i<n; ++i){
        for(int j=0; j<m; ++j){
            a[i][j]=char(' ');
            if(i==0 && (j==0 || j==m-1) || i==n-1 && (j==0 || j==m-1 )){a[i][j]=char('+');}
            if(i==0 && j>0 && j<m-1 || i==n-1 && j>0 && j<m-1){a[i][j]=char('-');}
            if(j==0 && i>0 && i<n-1 || j==m-1 && i>0 && i<n-1){a[i][j]=char('|');}
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
}
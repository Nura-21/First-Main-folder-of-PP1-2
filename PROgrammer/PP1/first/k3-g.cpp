#include <iostream>
using namespace std; 
int main(){
    int n;
    cin>>n;
    int a[n][n];
    int k=1; int t=0; int m=1; int l=1;
    for(int i=0;i<n;++i){
        for(int j=0;j<n;++j){
            a[i][j]=0;
            if(i > 0 && j==0 && j<n){a[i][j]=a[i][j]+l;++l;}
            if(i==0 && j>0 && j<n){a[i][j]=a[i][j]+k;++k;}
            if(i==n-1  && j<n){
                a[i][j]=n-1;
                a[i][j]=a[i][j]+t;++t;}
            
            if(i > 0 && j==n-1){a[i][j]=n-1;
                a[i][j]=a[i][j]+m;++m;
                }
                cout<<a[i][j];
        }
        cout<<endl;
    }
}
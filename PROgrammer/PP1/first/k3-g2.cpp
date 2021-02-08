#include <iostream>
using namespace std; 
int main(){
    int n;
    cin>>n;
    string a[n][n];
    int k=1; int t=0; int m=1; int l=1;
    for(int i=0;i<n;++i){
        for(int j=0;j<n;++j){
            a[i][j]=' ';
            a[0][0]='0';
            if(i > 0 && j==0 && j<n){a[i][j]=char('0'+l);++l;}
            if(i==0 && j>0 && j<n){a[i][j]=char('0'+k);++k;}
            if(i==n-1  && j<n){
                a[i][j]=char('0'+n-1);
                }
            if(i > 0 && j==n-1){
                a[i][j]=char('0'+n-1);
                }
            cout<<a[i][j];
        }
        cout<<endl;
    }
}
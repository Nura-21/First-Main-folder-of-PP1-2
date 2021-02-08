#include <iostream>
#include <climits>

using namespace std;

int main(){

    int n, m;
    cin >> n >> m;

    int a[n][m];
    int in,st;

    for(int i = 0; i < n; ++i){
        for(int j = 0; j < m; ++j)
        {
            if(i==0 || j==0)
            {
                a[i][j]=1;
            }
        }
    }

    for(int i=1;i<n;++i){
        for(int j=1; j<m; ++j){
            a[i][j]=a[i-1][j]+a[i][j-1];
        }
    }
       for(int i=0;i<n;++i){
        for(int j=0; j<m; ++j){
            cout<<a[i][j]<< " ";
        }
        cout<<endl;
    }
    
return 0;
}
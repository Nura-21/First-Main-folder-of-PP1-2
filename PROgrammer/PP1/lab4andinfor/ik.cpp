#include <iostream>
#include <climits>

using namespace std;

int main(){

    int n, m;
    cin >> n >> m;

    int a[n][m];

    for(int i = 0; i < n; ++i){
        for(int j = 0; j < m; ++j)
        {
        if(i==0)
        {   
            a[0][0]=0;
            a[0][j]=1+a[i][j-1];
        }
        }
        }
    for(int i = 1; i < n; ++i){
        for(int j = m-1; j > m; --j)
        {
            a[1][j-1]=1+a[i][j];
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

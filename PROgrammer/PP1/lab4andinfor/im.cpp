#include <iostream>
#include <climits>

using namespace std;

int main(){

    int n, m, w, in1, st1,in2,st2;
    cin >> n >> m >> w >> in1 >> st1 >> in2 >> st2;
    char a[n][m];
    for(int i = 0; i < n; ++i){
        for(int j = 0; j < m; ++j)
        {
        if(i==in1 && j==st1)
        {

            a[i][j]=char('*');
        }
        else if(i==in2 && j==st2)
        {
            a[i][j]=char('*');
        }
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

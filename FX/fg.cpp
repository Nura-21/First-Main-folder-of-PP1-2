#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,m; 
    cin >> n >> m;
    int a[n][m];
    vector<int> sum(n);
    for(int i = 0 ; i < n; ++i){
        for(int j = 0; j < m; ++j){
            cin >> a[i][j];
            if(a[i][j] >= 0){ sum[i]++; }
            else{ continue; }
        }
    }
    bool ok = false;
    for(int i = 0; i < sum.size()-1; ++i){
        if( sum[i] == sum[i+1]){ ok = true; }
        else {ok = false; break;}
    }
    if( ok == true){ cout << "Numbers are equal" << endl;}
    else{
        int mx=-111111;
        int id;
        for(int i = 0; i < sum.size(); ++i){
            if( mx < sum[i] ) { mx = sum[i]; id = i+1;}
        }
        cout << id << endl;
    }
}
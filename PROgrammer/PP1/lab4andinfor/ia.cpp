#include <iostream>

using namespace std;

int main(){

    int n;
    cin >> n;

    int a[n][n];
    for(int i=0;i<n;++i)
    {
        for(int j=0;j<n;++i)
        {
            cin>>a[i][j];
        }
    }

    for(int i = 0; i < n; ++i){
        for(int j = 0; j <n; ++j){
            if(a[i]==a[j]){
                cout<<"yes";
            }
            else cout<<"no";
        }
    }

    cout<<"yes"<<endl;
    return 0;
}
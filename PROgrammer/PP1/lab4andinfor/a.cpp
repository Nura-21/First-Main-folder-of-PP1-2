#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n][n];
    for(int i=0;i<n;++i){
        for(int j=0;j<n;++i)
        cin>>a[i][j];
    }
    int mx=0;
    for(int i=0;i<n;++i){
        for(int j=0;j<n;++i){
        if(mx<a[i][j])
        mx=a[i][j];
    }
    }
    cout<<mx<<endl;
    return 0;
}
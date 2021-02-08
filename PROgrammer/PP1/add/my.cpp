#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n][n];
    for(int i=0;i<n;++i){
        for(int j = 0; j < n; j++){
            cin>>a[i][j];
        }
    }
    for(int i=0;i<n;++i){
        for(int j = 0; j < n; j++){
            a[0][0]=1;
            if(i==j && i!=0 && j!=0 ){
                a[i][j]=a[i-1][j]+a[i][j-1];}
            else if(i!=j) {char(a[i][j])=='21';}
            cout<<a[i][j]<<" "; 
        }
        cout<<endl;
    }

    return 0;
}
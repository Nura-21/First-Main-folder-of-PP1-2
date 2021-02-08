#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n][3];
    int b[n+1][3];
    for(int i=0;i<n;++i){
        for(int j=0;j<n;++j){
            cin>>a[i][j];
            b[i][j]=0;
        }
    }
    for(int i=0;i<n;++i){
        for(int j=0;j<n;++j){   
        if(j==0){
            if(a[i][j]>a[i+1][j]){b[i][j]==a[i+1][j];
            b[i+1][j]=a[i][j];}
            else{b[i][j]=a[i][j];}
        }
        cout<<b[i][j]<<" ";
        }
        cout<<endl;
    }
}
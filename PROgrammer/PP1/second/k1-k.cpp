#include <iostream>
using namespace std;
void read(int ** a,int n){
    for(int i=0;i<n;++i){
        for(int j=0;j<3;++j){
            cin>>a[i][j];
        }
    }
}
bool check(int ** a,int n,int k){
    for(int i=0;i<n;++i){
        for(int j=0;j<n;++j){
            if(a[i][j]>=k){return true;}
        }
    }
    return false;
}
int main(){
    int n,k;
    cin>>n>>k;
    int ** a;
    a=new int*[n];
    for(int i=0;i<n;++i){
        a[i]=new int[n];
    }
    read(a,n);
    if(check(a,n,k)){cout<<"YES";}
    else{cout<<"NO";}
}
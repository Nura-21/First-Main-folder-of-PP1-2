#include <iostream>
using namespace std;
void readArray(int * a, int n){
    for(int i = 0; i < n; ++i){
        cin>>a[i];
    }
}

void solve(int * a, int n,int x){
    bool isEq=false;
    for(int i = 0; i < n; ++i){
    if(a[i]==x){isEq=true;}
    else{isEq==false;}
    }    
    if(isEq==true){cout<<"Yes"<<endl;}
    else if(isEq==false){cout<<"No"<<endl;}
}

int main(){
    int n;
    cin>>n;
    int a[n];
    readArray(a,n);
    int x;
    cin>>x;
    solve(a,n,x);
    return 0;
}
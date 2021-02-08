#include <bits/stdc++.h>
using namespace std;
int deg(int n,int a){
    if(a==0){return 1;}
    return deg(n,a-1)*n;
}
int main(){
    int n;
    cin>>n;
    cout<<deg(2,n);
}
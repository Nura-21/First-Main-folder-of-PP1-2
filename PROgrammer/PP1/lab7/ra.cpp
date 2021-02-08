#include <bits/stdc++.h>
using namespace std;
bool res3(int N){
    if(N==1) return true;
    if(N<1) return false;
    return res3(N-3);
}
bool res5(int N){
    if(N==1) return true;
    if(N<1) return false;
    return res5(N-5);
}
int main(){
    int n;
    cin>>n;
    if(res3(n) || res5(n)){cout<<"YES";}
    else{cout<<"NO";}
}
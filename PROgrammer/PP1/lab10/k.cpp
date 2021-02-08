#include <bits/stdc++.h>
using namespace std;
bool isPrime(int someint){
    int deliteli=0;
    for(int i=1;i<=abs(someint);++i){
        if(someint % i == 0){deliteli++;}
    }
    if(deliteli>2){return false;}
    return true;
}
bool che(int x){
    if(x==0 || x==1 ){return false;}
   if(isPrime(abs(x))){
       return true;
   }
   else return false;
}
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;++i){
        cin>>a[i];
    }
    int r=count_if(a,a+n,che);
    cout<<r<<" ";
}
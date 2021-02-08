#include <iostream>
using namespace std;
int summ(int n, int m){
    int n1=n;
    int m1=m;
    if(n<0 && m>=0){
        if(n==0){return m;}
        if(m==0){return n;}
        return summ(n+1,m-1);
    }
    if(n==0){return m;}
    if(m==0){return n;}
    return summ(n-1,m-1);
}
int main(){
    int n,m;
    cin>>n>>m;
    summ(n,m);
}
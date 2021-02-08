#include <iostream>
using namespace std;
int phi(int n){
    unsigned long long int a[200];
    a[0]=1;a[1]=1;
    for(int i=2;i<100;++i){
        a[i]=a[i-1]+a[i-2];
        if(n==i){cout<<a[i];}
    }
    return n;
}
int main(){
    int n;
    cin>>n;
    phi(n);
    return 0;
}
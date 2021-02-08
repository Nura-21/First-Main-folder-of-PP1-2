#include <iostream>
using namespace std;
int trib(int n){
    int a[20];
    a[0]=0;
    a[1]=1;
    a[2]=1;
    int b=0;
    if(n==0){cout<<a[0]<<endl;return 0;}
    if(n==1){cout<<a[1]<<endl;return 0;}
    if(n==2){cout<<a[2]<<endl;return 0;}
    //a[n+3]=a[n]+a[n+1]+a[n+2]
    for(int i=0;i<3;++i)
    {b+=a[n-i-1];}  
    cout<<b;
    return 0;
    
}
int main(){
    int n;
    cin>>n;
    trib(n);
}
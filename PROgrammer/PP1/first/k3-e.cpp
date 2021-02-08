#include <iostream>
using namespace std; 
int main(){
    int n;
    cin>>n;
    int a[n],b[n];
    int mx=-1;
    for(int i=0;i<n;++i){
        cin>>a[i];
    }
    for(int i=0;i<n;++i){
        cin>>b[i];
    }
    for(int i=0;i<n;++i)
    {
        int dif=a[i]-b[i];
        if(mx<dif){mx=dif;}
    }
    cout<<mx;
}
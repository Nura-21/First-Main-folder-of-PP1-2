#include <iostream>
using namespace std;
int fr(unsigned long long int en,unsigned long long int sum){
    if(en==1){ return sum;}
    unsigned long long int cnt=0;
    int mx=-1;
    for(int i=1;i<en;++i){
        if(en % i==0){cnt++;if(i>mx){mx=i;}}
    }
    //cout<<mx<<" ";
    return fr(mx,sum+cnt);
}
int main(){
    unsigned long long int en;
    cin>>en;
    cout<<fr(en,1);
}
#include <bits/stdc++.h>  
using namespace std;  
int inf(int n,int m){
    m+=n;
    if(n==0){
        return m;
        }
    cin>>n;
    return inf(n,m);

}
int main(){
    int n;
    cin>>n;
    cout<<inf(n,0)<<endl;
}
#include <iostream>
using namespace std; 
int main(){
    int n,m,k;
    cin>>n>>m>>k;
    string s[n];
    for(int i=0;i<n;++i){
        cin>>s[i]; 
    }
    for(int i=k-m;i<k+m+1;++i)
    {   if(i>=0 && i<=n)
        cout<<s[i]<<endl;
    }
}
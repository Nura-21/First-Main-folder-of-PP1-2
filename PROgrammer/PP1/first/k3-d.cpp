#include <iostream>
#include <string>
using namespace std; 
int main(){
    string s;
    cin>>s;
    int n,m;
    cin>>n>>m;
    for(int i=n-1;i<m;++i){
        s[i]=s[i]+32;
    }
    cout<<s;
}
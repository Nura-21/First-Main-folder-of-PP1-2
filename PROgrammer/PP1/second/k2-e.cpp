#include <iostream>
using namespace std;
bool pos(string s,int l,int n,int m){
    for(int i=0; i < l;++i){
        if(i<n){if(s[i]>=48 && s[i]<=57){return true;}
            else return false;break;}
        else if(i==n){if(s[i]=='-')return true;
            else return false;break;}
        else if(i>=m && i<l){if(s[i]>=48 && s[i]<=57){return true;}
        else{return false;break;} }
    }
    return true;
}
int main(){
    int n,m;
    cin>>n>>m;
    string s;
    cin>>s;
    int l=n+m+1;
    if(pos(s,l,n,m)){cout<<"YES";}
    else cout<<"NO";
}
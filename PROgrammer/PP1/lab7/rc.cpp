#include <iostream>
using namespace std;
int all(string s,int l,int i,int cnt){
    if(l==1){
        if(s[i]>=48 && s[i]<=57){cnt++;return cnt;}
        else{return cnt;}
    }
    if(l==i){return cnt;}
    if(s[i]>=48 && s[i]<=57){  cnt++; return all(s,l,i+1,cnt);}
    return all(s,l,i+1,cnt);
    
}
int main(){
    string s;
    cin>>s;
    int l=s.size();
    int cnt=0;
    cout<<all(s,l,0,cnt);
}
#include <iostream>
using namespace std;
bool isbh(string s){
    int up=0,left=0;
    for(int i=0;i<s.size();++i){
        if(s[i] == 'U'){++up;}
        else if(s[i]=='D'){--up;}
        else if(s[i]=='L'){++left;}
        else if(s[i]=='R'){--left;}
    }
    if(up==0 && left==0){return true;}
    else{return false;}
}
int main(){
    string s;
    cin>>s;
    if(isbh(s)){cout<<"YES";}
    else{cout<<"NO";}
}
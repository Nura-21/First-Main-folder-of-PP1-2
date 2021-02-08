#include <iostream>
using namespace std;
string bigboss(string s,int i,int l,string ans,int ansize){
    if(l==1){return s;}
    if(l==i+1){return "-1";}
    if(ansize==1){return ans;}
    if(s[i]>='A' && s[i]<='Z'){  return bigboss(s,i+1,l,ans+s[i],ansize+1);}
    return bigboss(s,i+1,l,ans,ansize);
}
int main(){
    string word;
    cin>>word;
    int el=word.size();
    string ans;
    cout<<bigboss(word,0,el,ans,0);
}
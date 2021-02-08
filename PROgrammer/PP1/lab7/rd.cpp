#include <iostream>
using namespace std;
string all(string s,int l,int is,string g,int lg,int ig){
    if(l==1){return s+"*";}
    if(lg == ig-1){return g;}
    if(ig %2 != 0){g[ig]='*';return all(s,l,is,g,lg,ig+1);}
    g[ig]=s[is];return all(s,l,is+1,g,lg,ig+1);
}
int main(){
    string s;
    cin>>s;
    int ls=s.size(); 
    string g;
    g.resize(ls*2-1);
    int lg=g.size();
    cout<<all(s,ls,0,g,lg,0);
}
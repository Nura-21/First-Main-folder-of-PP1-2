#include <iostream>
#include <algorithm>
using namespace std;
string back(string prev,string s,int ls,int i,string g,int lg,int ig){
    if(ls==1){return s+s;}
    if(ig==ls-1){return prev+g;}
    if(s[i]=='('){s[i]=')';}
    g[ig]=s[i];
    return back(prev,s,ls,i+1,g,lg,ig-1);
}
int main(){
    string s;
    cin>>s;
    string g;
    string first;
    first=s;
    int ls=s.size();
    g.resize(ls*2);
    int lg=g.size();
    cout<<back(first,s,ls,0,g,lg,lg-1);
}
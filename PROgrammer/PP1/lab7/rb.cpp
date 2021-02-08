#include <iostream>
using namespace std;
int high(string s,int l,int i,int mx)
{
    if(int(s[i]-48)>mx){mx=int(s[i]-48);}
    if(l==1){return int(s[0]-48);}
    if(l==i){return mx;}
    return high(s,l,i+1,mx);
}
int main(){
    string s;
    cin>>s;
    int mx=-1;
    int l=s.size();
    cout<<high(s,l,0,mx);
}
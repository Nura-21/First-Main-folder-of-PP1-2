#include <iostream>
using namespace std;
int fav(string s,int l, int sum,int i){
    if(l==1){return int(s[0]-'0');}
    if(l==i){return sum;}
    sum+=int(s[i]-'0');
    return fav(s,l,sum,i+1);
}
bool che(int sum,string s,int l){
    if( sum % int(s[l-1]-'0') == 0) return true;
    else return false;
}
int main(){
    string s;
    cin>>s;
    int l=s.size();
    int sum=fav(s,l,0,0);
    if(che(sum,s,l)){cout<<"YES";}
    else cout<<"NO";
}
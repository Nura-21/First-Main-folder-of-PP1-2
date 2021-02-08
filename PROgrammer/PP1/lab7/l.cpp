#include <bits/stdc++.h>  
using namespace std;  
string pal(string s,int l){
    if(l==1){return "Yes";}
    string t=s;
    reverse(t.begin(),t.end());
    if(t==s){return "Yes";}
    return "No";
}
int main(){
    string s;
    cin>>s;
    int l=s.size();
    cout<<pal(s,l)<<endl;
}
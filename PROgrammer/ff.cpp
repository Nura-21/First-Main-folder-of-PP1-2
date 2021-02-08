#include <bits/stdc++.h>
using namespace std;
int rev(int nwint) 
{   int revin=0; 
    while(nwint>0) 
    {   revin=nwint%10+revin*10;
        nwint=nwint/10; } 
    return revin; 
} 
void reverseStr(string & s) 
{ 
    int n=s.length(); 
    for (int i=0; i<n/2;i++) {
        swap(s[i],s[n-i-1]); 
    }
}
string removeZero(string & s) 
{ 
    int i=0; 
    while (s[i]=='0') 
       i++;
    s.erase(0,i); 
    return s; 
}  
int main(){
    int n;cin>>n;
    vector<int> ans;
    for(int i=0;i<n;++i){
        int nwint1,nwint2;
        cin>>nwint1>>nwint2;
        ans.push_back(rev(nwint1)+rev(nwint2));
    }
    for_each(ans.begin(),ans.end(),rev);
    vector<string> v2;
    for(int i=0;i<ans.size();++i){
        auto res = to_string(ans[i]);
        v2.push_back(res);
    }
    for(int i=0;i<v2.size();++i){
        reverseStr(v2[i]);
        cout<<removeZero(v2[i])<<endl;
    }
}
#include <bits/stdc++.h>  
#include <algorithm>  
#include <set>  
using namespace std;
char todow(char c){
    if(c>='A' && c<='Z') return char(c-'A'+'a');
    return c;
}
int main(){
    string s;
    cin>>s;
    set<char> ss;
    for(int i=0;i<s.size();++i){
        ss.insert(todow(s[i]));
    }
    cout<<ss.size()<<endl;
    set<char> :: iterator it;
    for(it=ss.begin();it!=ss.end();++it){
        cout<<*it<<" ";
    }
}
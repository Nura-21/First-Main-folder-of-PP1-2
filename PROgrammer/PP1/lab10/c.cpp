#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int n=0;
    for(int i=0;i<s.size();++i){
            if(s[i]=='1' && s[i+1]=='6'){s.erase(i,2);i=max(i-2,0);}
            else if(s[i]=='2' && s[i+1]=='5'){s.erase(i,2);i=max(i-2,0);}
            else if(s[i]=='4' && s[i+1]=='9'){s.erase(i,2);i=max(i-2,0);}
            else if(s[i]=='6' && s[i+1]=='4'){s.erase(i,2);i=max(i-2,0);}
            else if(s[i]=='8' && s[i+1]=='1'){s.erase(i,2);i=max(i-2,0);}
            }
            cout<<s;
    stack<char> st;
    for(int i=0;i<s.size();++i){
        st.push(s[i]);
    }

}
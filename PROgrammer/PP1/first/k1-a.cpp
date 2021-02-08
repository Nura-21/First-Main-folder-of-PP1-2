#include <iostream>
using namespace std; 
int main(){
    char c;
    string s;
    cin>>c>>s;
    int cnt=0;
    for(int i=0;i<s.size();++i)
    {   
        if(c==s[i]){cnt++;}
    }
    cout<<cnt;
}
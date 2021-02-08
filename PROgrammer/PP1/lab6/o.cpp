#include <iostream>
#include <algorithm>
using namespace std;
string check(string s){
    int sum=0;
    for(int i=0;i<s.size();++i){
        sum+=s[i]-'0';
    }
    if(sum % (s[s.size()-1]-'0')==0){cout<<"Yes"<<endl;}
    else{cout<<"No"<<endl;}
    return s;
}
int main(){
    string s;
    cin>>s;
    check(s);
    return 0;
}

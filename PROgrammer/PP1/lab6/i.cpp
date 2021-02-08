#include <iostream>
#include <string>
#include <cctype>
using namespace std;
int main(){
    string s;
    cin>>s;
    for(int i=0;i<s.size();++i){
        int code=(s[i]);
        if(code>=97 && code<=122 && i%2==0){s[i]=s[i]-32;}
    }
    cout<<s;
    return 0;
}
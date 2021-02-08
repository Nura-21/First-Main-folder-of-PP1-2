#include <iostream>
using namespace std;
int main(){
    string s;
    cin>>s;
    int x;
    cin>>x;
    int cnt=0;
    for(int i=0;i,s.size();++i){
        int code=int(s[i]);
        if(code>=48 && code<=57){cnt++;}
    }
}
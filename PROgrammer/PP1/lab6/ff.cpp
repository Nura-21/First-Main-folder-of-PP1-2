#include <iostream>
using namespace std;

void intfind(string s,int n){
    n=s.size();
    cin>>s;
    for(int i=0;i<n;++i){
        if(int(s[i])>=48 || int(s[i])<=57)
        {}
    }
    cout<<int(s[1]);
}
int main(){
    string s;
    int n;
    intfind(s,n);
    return 0;
}
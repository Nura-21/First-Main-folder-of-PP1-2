#include <iostream>
using namespace std;
string sum(string s){
    int sums=0;
    for(int i=0;i<s.size();++i){
        sums+=s[i]-'0';
    }
    cout<<sums;
    return s;
}
int main(){
    string s;
    cin>>s;
    sum(s);
    return 0;
}
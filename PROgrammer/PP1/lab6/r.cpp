#include <iostream>
#include <string>
using namespace std;
string up(string s){
    if(s[0]>=65 && s[0]<=90){s[0];}
    else{s[0]=s[0]-32;}
    return s;
}
int main(){
    string s;
    cin>>s;
    cout<<up(s);
    return 0;
}
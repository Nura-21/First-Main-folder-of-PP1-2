#include <iostream>
using namespace std;
string check(string s){
    bool isEq=false;
    for(int i=0;i<s.size();++i){
        if(s[i]%2!=0){isEq=false;break;}
        else{isEq=true;}
    }
    if(isEq==true){cout<<"Valid";}
    else{cout<<"Not valid";}
    return s;
}
int main(){
    string s;
    cin>>s;
    check(s);
    return 0;
}
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int r,l,b,f;
int main(){
    string s;
    cin>>s;
    int cnt=0;
    for(int i=0;i<s.size();++i){
        if(s[i] == 'B'){--f;}
        else if(s[i] == 'R'){++r;}
        else if(s[i] == 'L'){--r;}
        else if(s[i] == 'F'){++f;}
    }
    if(f<0){for(int i=0;i<-1*f;++i){
        cout<<"F";
    }}
    else{for(int i=0;i<f;++i){
        cout<<"B";
    }}
    if(r<0){for(int i=0;i<-1*r;++i){
        cout<<"R";
    }}
    else{for(int i=0;i<r;++i){
        cout<<"L";
    }}
}
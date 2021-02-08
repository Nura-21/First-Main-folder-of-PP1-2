#include <iostream>
using namespace std; 
int main(){
    int n;
    cin>>n;
    string s[n];
    for(int i=0;i<n;++i){cin>>s[i];}
    for(int i=0;i<n;++i){if(s[i]=="yellow"){cout<<"prepare"<<endl;}
    if(s[i]=="green"){cout<<"go"<<endl;}
    if(s[i]=="red"){cout<<"stop";}}
}
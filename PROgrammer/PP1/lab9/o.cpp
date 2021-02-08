#include <iostream>
#include <map>
using namespace std;
int main(){
    int n;
    cin>>n;
    map<string,string> base;
    for(int i=0;i<n;++i){
        string log,pass;
        cin>>log>>pass;
        base[log]=pass;
    }
    int k;
    cin>>k;
    map<string,string> :: iterator it;
    for(int i=0;i<k;++i){
        string l,p;
        cin>>l>>p;
        if(base.count(l)){
            if(base[l]==p){cout<<"correct password"<<endl;}
            else{cout<<"password error"<<endl;}
        }
        else{cout<<"login error"<<endl;}
    }
}
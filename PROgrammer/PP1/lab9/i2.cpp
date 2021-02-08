#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
unordered_multimap<string, int> m;
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;++i){
        string s;
        cin>>s;
        m.insert(make_pair(s,1));
    }
    unordered_map<string, int> :: iterator it;
    for(it=m.begin();it!=m.end();++it){
        if(it->second==1){cout<<"new user added"<<endl;}
        if(it->second>1){cout<<"user already exists"<<endl;}
    }
    
}
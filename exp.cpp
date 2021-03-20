#include <bits/stdc++.h>
using namespace std;
int main(){
    int n; cin>>n;
    map<string,int> m;
    bool ok;
    ok = 0;
    vector<string> v;
    for(int i=0;i<n;++i){
        string s;
        cin>>s;
        m[s] +=1;
        if(m[s]  % 2 == 0){
            v.push_back(s);
            ok = 1;
        }
    }
    if(ok == 0){
        cout<<"Understandable, have a nice day"<<endl;
    }
    else{
        for(int i=0;i<v.size();++i){
            cout<<v[i]<<endl;
        }
    }
}
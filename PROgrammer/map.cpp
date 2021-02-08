#include <bits\stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    map<int,string> m;
    for(int i=0;i<n;++i){
        int x;
        cin>>x;
        string id;
        cin>>id;
        m.emplace(x,id);
    }
    for(auto it : m){
        cout<<it.first<<" "<<it.second<<endl;
    }
}
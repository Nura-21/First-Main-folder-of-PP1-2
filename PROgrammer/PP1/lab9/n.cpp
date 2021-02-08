#include<iostream>
#include<vector>
#include<set>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> v1;
    vector<int> v2;
    for(int i=0;i<n;++i){
        int in;
        cin>>in;
        v1.push_back(in);
    }
    v2=v1;
    set<int> ans;
    int cnt=0;
    for(int i=0;i<n;++i){
        for(int j=0;j<n;++j){
            ans.insert(v1[i] ^ v2[j]);
            ans.insert(v1[j] ^ v2[i]);
        }
    }
    set<int > :: iterator it;
    for(it = ans.begin();it!=ans.end();++it){
        for(int i=0;i<n;++i){
            if(v1[i]==*it){++cnt;}
        }
    }
    cout<<cnt;
}
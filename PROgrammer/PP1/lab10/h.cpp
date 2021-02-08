#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> v;
    set<int> s;
    int x;
    int k;
    for(int i=0;i<n;++i){
        x=s.size();
        cin>>k;
        s.insert(k);
        if(x!=s.size()){
            v.push_back(k);
        }
    }
    do{
        for(int i = 0; i < v.size(); ++i){
            cout << v[i] << " ";
        }
        cout << endl;
    }while(next_permutation(v.begin(),v.end()));
    }

#include <bits/stdc++.h>
using namespace std;
int main(){
    int en;
    cin>>en;
    vector<string> v1;
    vector<int> v2;
    for(int i=0;i<en;++i){
        string names;
        int d;
        cin>>names>>d;
        v1.push_back(names);
        v2.push_back(d);
    }
    sort(v1.begin(),v1.end());
    sort(v2.begin(),v2.end());
    for(int i=0;i<en;++i){
        cout<<v1[i]<<" "<<v2[i]<<endl;
    }
}
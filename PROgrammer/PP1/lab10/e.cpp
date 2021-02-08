#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    double cnt=0;
    map<string,double> ma;
    for(int i=0;i<n;++i){
        int m;
        cin>>m;
        for(int j=0;j<m;++j){
            string s;
            double k;
            cin>>s>>k;
            ma[s]+=k;
            cnt+=k;
        }
    }
    map<string,double> :: iterator it;
    for(it=ma.begin();it!=ma.end();++it){
        cout<<it->first << " " << (it->second /cnt)*100<<endl;
    }
}
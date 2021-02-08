#include <bits/stdc++.h>
using namespace std;
bool cmp(pair<string,double>  i , pair<string,double> j){
    return i.second>j.second;
}
int main(){
    int n;
    cin>>n;
    map<string,int> m;
    double allp=0;
    for(int i=0;i<n;++i){
        string names;
        int points;
        cin>>names>>points;
        m[names]+=points;
        allp+=points;
    }
    map<string,int> :: iterator it1;
    vector<pair<string,double>> v;
    for(it1=m.begin();it1!=m.end();++it1){
        cout<<it1->first<<" "<<it1->second<<endl;
        v.push_back(make_pair(it1->first,it1->second*100/allp));
    }
    sort(v.begin(),v.end(),cmp);
    for(int i=0;i<v.size();++i){
        cout<<v[i].first<<" "<< v[i].second<<"%"<<endl;
    }
}
#include <bits/stdc++.h>  
#include <algorithm>  
using namespace std;
int main(){
    int n;
    cin>>n;
    int x;
    vector<int> v(n);
    for(int i=0;i<v.size();++i){
        cin>>v[i];
    }
    cin>>x;
    bool found=false;
    for(int i=0;i<v.size();++i){
        if(v[i]==x) {found=true;break;}
        else {found=false;}
    }
    if(found){cout<<"Yes"<<endl;}
    else cout<<"No"<<endl;
}
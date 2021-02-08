#include <bits/stdc++.h>
using namespace std;
int main(){
    int x,y,f,n;
    cin>>x>>y>>f>>n;
    vector<int> vec1(n);
    vector<int> vec2(n);
    for(int i=0;i<n;++i){
        cin>>vec1[i];
    }
    for(int i=0;i<n;++i){
        cin>>vec2[i];
    }
    int mx=-1;
    int id=0;
    vector<int> win;
    vector<int> wid;
    for(int i=0;i<n;++i){
        if(vec1[i]>vec2[i]){
            win.push_back(vec1[i]);
            wid.push_back(i+1);
        }
    }
    for(int i=0;i<win.size();++i){
        if(mx<win[i]){id=wid[i];}
    }
    int minid=INT32_MAX;
        if(minid>id){minid=id;        cout<<(id)<<" ";}

}
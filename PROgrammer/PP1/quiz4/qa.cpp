//Turdalin Nurassyl задача ЭЙ
#include <bits/stdc++.h>
using namespace std;
int main(/*Turdalin Nurassyl*/){
    int en; cin>>en;
    map<pair<int,int>,int> alln;
    vector<int> ans(en);
    //vector<int> cnt(en);
    for(int i=0;i<en;++i){
        int first,second; 
        cin>>first>>second;
        //cnt[i]=first+second;
        if(first<second/*first>second*/){swap(first,second);}
        ans[i]=alln[make_pair(first,second)]; 
        alln[make_pair(first,second)]++;
    }
    /*for(int i=0;i<en-1;++i){
        if(cnt[i]==cnt[i+1]){ans[i+1]++;}
    }*/
    for(int i=0;i<ans.size();++i){
        cout<<ans[i]<<"\n";
    }
}

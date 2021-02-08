#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;cin >> n;
    map<string,string> mp1;
    map<string, string> mp2;
    for(int i=0;i<n;i++){
        string w1,w2;cin>>w1>>w2;
        if(mp2.count(w1)==true){mp1[mp2[w1]]=w2;    mp2[w2]=mp2[w1];} 
        else{mp2[w2]=w1;     mp1[w1]=w2;}
    }
    cout<<mp1.size()<<endl;
    map<string,string> :: iterator it;
    for(it=mp1.begin();it!=mp1.end();++it){
        cout<<it->first<<" "<<it->second<<endl;
    }
}
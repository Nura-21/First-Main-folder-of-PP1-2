#include <iostream>
#include <set>
#include <vector>
#include <unordered_map>
#include <map>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<string> v;
    map <string,int> mp;
    string nuser="new user added";
    string alre="user already exists";
    for(int i=0;i<n;++i){
        string g;
        cin>>g;
        v.push_back(g);
        mp[g]++;
    map <string,int> :: iterator it;
    /*
    for(it=v.begin();it!=v.end();++it)
    {   
        if(mp[*it] == ){cout<<nuser<<endl;}
        else if(mp[*it] > ){cout<<alre<<endl;}
        } 
    */
    for(it=mp.begin();it!=mp.end();++it){
        cout<<it->second<<endl;
    }

    }
}
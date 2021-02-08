#include <iostream>
#include <set>
#include <map>
using namespace std;
int main(){
    int n;
    cin>>n;
    map <string,int> mp;
    for(int i=0;i<n;++i){
        string g;
        cin>>g;
        int x;
        cin>>x;
        mp[g]+=x;
    }
    map <string,int> :: iterator it;
    for(it = mp.begin();it!=mp.end();++it)
    {   
        cout<<it->first<<" "<<it->second<<endl;
    } 
}
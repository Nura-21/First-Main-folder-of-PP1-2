#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    map<string,string> m;
    for(int i=0;i<n;++i){
        string name;
        string day;
        cin>>name>>day;
        if(m[name].find(day)==true){m[name] ="0";cout<<"LOS";}
        else{m[name]+=day+"!";}
    }
    map<string,string> :: iterator it;
    for(it=m.begin();it!=m.end();++it){
        cout<<it->first<<" "<<it->second<<endl;
    }
}
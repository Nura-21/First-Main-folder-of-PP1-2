#include <bits\stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    vector<int> v;
    /*string in="";
    for(int i=0;i<s.size();++i){
        if(s[i]>='0' && s[i]<='9'){
            in+=s[i];
        }
        else{
            int n=stoi(in);
            v.push_back(n);
            in="";
        }
        
    }
    for(int i=0;i<v.size();++i){
        cout<<v[i]<<" ";
    }*/
    
    int x=0;
    for(int i=0;i<s.size();++i){
        if(s[i]>='0' && s[i]<='9'){
            res(s);
        }
        else{
            res>>x;
        }
        
    }
    cout<<x;
    
    


}
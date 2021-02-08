#include<iostream>
#include<map>
#include<vector>
#include<algorithm>
#include<queue>
using namespace std;
int main(){
    int n;
    cin>>n;
    queue<pair<int,string>> q; 
    for(int i=0;i<n;++i){
       int r;
       cin>>r;
       if(r==1){
           string s;
           cin>>s;
           q.push(make_pair(r,s));
       }
       if(r==2){
           q.push(make_pair(r,""));
       }
    
}
while(!q.empty()){
        cout<<q.front().second<<endl;
        q.pop();
        if(q.front().second==""){cout<<"queue is empty";}
    }
}

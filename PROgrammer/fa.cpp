#include <bits/stdc++.h>
using namespace std;
int main(){
  int q,w,e,r,t,y,u;
  cin>>q>>w>>e>>r>>t>>y>>u;
  long long a=q*1+w*2+e*5+r*10+t*20+y*50+u*100;
  int s;
  cin>>s;
  for( int i=0;i<s;i++){
      int d;
      cin>>d;
      if(d<=a){  cout<<"Transaction accepted!"<<endl; a-=d;}
      else{cout<<"Transaction stopped!"<<endl;}
  }
}
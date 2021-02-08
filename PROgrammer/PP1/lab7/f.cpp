#include <bits/stdc++.h>  
using namespace std;  
int even(string s,int l, int i,int n){
    if(l==1)
    {
        if(int(s[i]-'0')%2==0){return 1;}
        else{return 0;}
    }
    if(i==l){return n;}
    if(int(s[i]-'0')%2==0)
        {
                n++;
        }
   return even(s,l,i+1,n);
    
}
int main(){
    string s;
    cin>>s;
    int l=s.size();
    cout<<even(s,l,0,0)<<endl;
}
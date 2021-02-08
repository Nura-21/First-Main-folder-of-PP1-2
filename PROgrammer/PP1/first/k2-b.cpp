#include <iostream>
using namespace std; 
int sums(string s,int l, int sum,int i){
    if(l==1){return int(s[i]-'0');}
    if(i==l){return sum;}
    sum+=int(s[i]-'0');
    return sums(s,l,sum,i+1);
}
int main(){
    string s;
    cin>>s;
    int sum=0;
    int l=s.size();
    int k=sums(s,l,sum,0);
    int t=k%10+k/10;
    cout<<t%10+t/10;
}
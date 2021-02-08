#include <iostream>
#include <algorithm>
using namespace std;
bool isPal(string s){
    string g=s;
    reverse(g.begin(),g.end());
    if(g==s){return true;}
    else return false;
}
int main(){
    string s;
    cin>>s;
    if(isPal(s)){cout<<"YES"<<endl;}
    else{cout<<"NO"<<endl;}
}
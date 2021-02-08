#include <iostream>
#include <algorithm>
using namespace std; 
int main(){
    string s;
    cin>>s;
    string g;
    g=s;
    reverse(g.begin(),g.end());
    if(g==s && s.size() % 2==0){cout<<"GoodPalindrome";}
    else if(g==s && s.size() % 2 !=0){cout<<"NotGoodPalindrome";}
    else if(g!=s){cout<<"NotPalindrome";}
}
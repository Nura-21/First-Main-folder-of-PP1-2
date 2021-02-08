#include <bits/stdc++.h>
using namespace std;
bool isPal(string s){
    string g;
    g=s;
    reverse(g.begin(),g.end());
    if(g==s){return true;}
    else return false;
}
int main(){
    string s;
    cin>>s;
    sort(s.begin(),s.end());
    bool ok=false;
    do{if(isPal(s)){ok=true;break;}
    else{ok=false;}
    }
    while(next_permutation(s.begin(),s.end()));
    if(ok){cout<<"ZA WARUDO TOKI WO TOMARE";}
    else{cout<<"JOJO";}
}
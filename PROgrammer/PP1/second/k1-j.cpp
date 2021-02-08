#include <iostream>
#include <set>
using namespace std;
void read(multiset<char> & v,string s){
    for(int i=0;i<s.size();++i){
        v.insert(s[i]);
    }
}
bool isAnagram(multiset<char> & v1,multiset<char> & v2){
    if(v1==v2){return true;}
    else return false;
}
int main(){
    string s,g;
    cin>>s>>g;
    multiset<char> vs;
    multiset<char> vg;
    read(vs,s);
    read(vg,g);
    if(isAnagram(vs,vg)){cout<<"YES";}
    else{cout<<"NO";}
}
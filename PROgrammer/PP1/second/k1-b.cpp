#include <iostream>
#include <set>
using namespace std;
int main(){
    string s;
    cin>>s;
    set<char> ss;
    for(int i=0;i<s.size();++i){
        ss.insert(s[i]);
    }
    set <char> :: iterator it;
    for(it=ss.begin(); it !=ss.end();++it){
        cout<<*it;
    }
}
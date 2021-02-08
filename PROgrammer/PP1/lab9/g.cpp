#include <iostream>
#include <stack>
#include <algorithm>
using namespace std;
int main(){
	string s;
	cin>>s;
	stack<char> q;
	for(int i=0;i<s.size();++i){
        if(s[i]=='0') {q.push(s[i]);}
        else if(s[i]=='1' && q.empty()){q.push(s[i]);}
        else if(s[i]=='1' && q.top()=='0'){q.push(s[i]);}
        else if(s[i]=='1' && q.top()=='1'){q.pop();}
    }
    string g;
    while(!q.empty()){
        g+=q.top();
        q.pop();
    }
    reverse(g.begin(),g.end());
    cout<<g;
}  
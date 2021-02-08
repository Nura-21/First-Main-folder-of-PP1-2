#include <iostream>
#include <stack>
using namespace std;
int main(){
	string s;
	cin>>s;
	stack<char> a;
	bool flag = true;
	for (int i=0;i<s.size();i++){
		if (s[i] == '(') a.push(s[i]);
		if (s[i]==')' && a.empty() ) flag = false;
		if (s[i] == ')' && !a.empty() && a.top()=='(') {
			a.pop();
		}
		if (flag ==  false) {
			cout<<"NO";
			return 0;
		}
	}
	if (a.empty()) cout<<"YES";
	else cout<<"NO";
}
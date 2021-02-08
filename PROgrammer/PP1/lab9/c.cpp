#include <iostream>
#include <algorithm>
#include <map>
using namespace std;
int main(){
	int n;
	cin>>n;
	map<string,int> a;
	for (int i=0;i<n;i++){
		string s;
		cin>>s;
		a[s]++;
	}
	map<string,int>::iterator it;
	int cnt=0;
	for (it = a.begin();it!=a.end();it++){
		if ((*it).second >=2) cnt++;
	}
	cout<<cnt;
}
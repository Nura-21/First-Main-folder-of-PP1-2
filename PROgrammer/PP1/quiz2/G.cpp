#include <bits/stdc++.h>
using namespace std;
string s;
int was[200];
int main()
{
    cin >> s;
    for(int i=0;i<s.size();i++)
    {
    	if(was[s[i]]==1)
    	{
    		cout << s[i];
    		was[s[i]]=0;
		}
		was[s[i]]=1;
	}
}
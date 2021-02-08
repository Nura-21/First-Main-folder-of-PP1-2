#include <bits/stdc++.h>
using namespace std;
string s;
char c;
int main()
{
    cin >> c >> s;
    for(int i=0;i<s.size();i++)
    {
    	if(s[i]==c)
    	{
    		s.erase(i,1);
		}
	}
	cout << s;
}

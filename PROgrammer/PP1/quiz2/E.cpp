#include <bits/stdc++.h>
using namespace std;
string s;
int was[200];
int main()
{
    cin >> s;
    for(int i=0;i<s.size();i++)
    {
    	was[s[i]-48]++;
	}
	for(int i=0;i<=9;i++)
	{
		if(was[i]!=0) 
		{
			cout << i << ": " << was[i] << endl;
		}
		
	}
}

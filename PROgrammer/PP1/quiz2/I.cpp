#include <bits/stdc++.h>
using namespace std;
//bflr
string s;
int r,l,b,f;
int main()
{
    cin >> s;
    for(int i=0;i<s.size();i++)
    {
    	if(s[i]=='R')
    	{
    		r++;
		}
    	if(s[i]=='L')
    	{
    		r--;
		}
    	if(s[i]=='F')
    	{
    		f++;
		}
    	if(s[i]=='B')
		{
			f--;
		}
	}
	if(f<0)
	{
		for(int i=1;i<=-1*f;i++)
		{
			cout << 'F';
		}
	}
	else
	{
		for(int i=1;i<=f;i++)
		{
			cout << 'B';
		}
	}
	if(r<0)
	{
		for(int i=1;i<=-1*r;i++)
		{
			cout << 'R';
		}
	}
	else
	{
		for(int i=1;i<=r;i++)
		{
			cout << 'L';
		}
	}
	//cout << r << " " << f;-2 1
}

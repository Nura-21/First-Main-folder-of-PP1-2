#include <bits/stdc++.h>
using namespace std;
int a[105][105],b,c,n,m;
string s;
int main()
{
    cin >> s >> n >> m;
    a[0][0]=1;
    for(int i=0;i<s.size();i++)
    {
    	if(s[i]=='U')
    	{
    		a[b-1][c]++;
    		b-=1;
		}
    	if(s[i]=='D')
    	{
    		a[b+1][c]++;
    		b+=1;
		}
    	if(s[i]=='L')
    	{
    		a[b][c-1]++;
    		c--;
		}
    	if(s[i]=='R')
    	{
    		a[b][c+1]++;
    		c++;
		}
	}
	for(int i=0;i<n;i++)
	{
		
		for(int j=0;j<m;j++)
		{
			if(a[i][j]!=0)
			{
				cout << '*';
			}
			else
			{
				cout << 'X';
			}
		}
		cout << endl;
	}
}

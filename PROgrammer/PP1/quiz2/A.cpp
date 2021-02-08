#include <bits/stdc++.h>
using namespace std;
int mx=-1,mn=200;
int was[200];
int ans,n;
int main()
{
    cin >> n;
    int a[n+1];
    for(int i=1;i<=n;i++)
    {
    	cin >> a[i];
    	was[a[i]]++;
    	if(a[i]>mx)
    	{
    		mx=a[i];
		}
		if(a[i]<mn)
		{
			mn=a[i];
		}
	}
	for(int i=mn;i<=mx;i++)
	{
		if(was[i]==0)
		{
			ans++;
		}
	}
	cout << ans;
}

#include <bits/stdc++.h>
using namespace std;
int was[1005],mx=-1,pos,n;
int main()
{
    cin >> n;
    int a[n+1];
    for(int i=0;i<n;i++)
    {
    	cin >> a[i];
    	was[a[i]]++;
    	if(mx<was[a[i]])
    	{
    		mx = was[a[i]];
		}
	}
	sort(a,a+n);
	for(int i=n-1;i>=0;i--)
	{
		cout<<was[a[i]];
		cout<<mx;
		if(was[a[i]]==mx)
		{
			//cout << a[i] << " ";
			was[a[i]]=0;
		}
	}
}

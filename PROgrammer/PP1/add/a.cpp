#include <bits/stdc++.h>
using namespace std;
int main ()
{int n;
cin>>n;
int a[n+1];
int mx =-1;
int mn =200;
int cnt;
int was[200];
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
  for(int i=mn;i<=mx;++i){
    if(was[i]==0){cnt++;}
  }
  cout<<cnt;
}
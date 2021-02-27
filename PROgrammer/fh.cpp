#include <bits/stdc++.h>
using namespace std;
string s,s1,ans;
int main()
{
    cin >> s >> s1;
    while(s1.size()<=s.size())
    {
        s1+=s1;
    }
    s1=s1.substr(0,s.size());
    for(int i=0;i<s.size();i++)
    {
        ans+=((s[i]-97 + s1[i]-97) % 26) + 97;
    }
    cout << ans;
}
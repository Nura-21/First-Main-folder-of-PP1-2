#include <bits/stdc++.h>
using namespace std;
int main()
{   int n;cin >> n;
    for(int i=1;i<=n;i++)
    {   
        string s,s1,s2;
        cin>>s>>s1;
        reverse(s.begin(),s.end());
        reverse(s1.begin(),s1.end());
        int sum = stoi(s)+stoi(s1);
        s2 = to_string(sum);
        reverse(s2.begin(),s2.end());
        cout << stoi(s2) << endl;
    }
}
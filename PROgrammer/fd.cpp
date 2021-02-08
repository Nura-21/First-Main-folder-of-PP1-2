#include <bits/stdc++.h>
using namespace std;
string s,s1,s2;
int n,n1,cr,cnt,sum;
float ans;
map<pair<string,string>,float> m1;
vector <pair<pair<string,string>,float> > v;
bool cmp(pair<pair<string,string>,float> p,pair<pair<string,string>,float> p1)
{
    if(p.second > p1.second)
    {
        return false;
    }
    if(p.second == p1.second && p.first.first > p1.first.first)
    {
        return false;
    }
    if(p.second == p1.second && p.first.first == p1.first.first && p.first.second > p1.first.second)
    {
        return false;
    }
    return true;
}
int main()
{
    cin >> n;
    map <string,float> m = {{"A+",4.00},{"A",3.75},{"B+",3.50},{"B",3.00},{"C+",2.50},{"C",2.00},{"D+",1.50},{"D",1.00},{"F",0}};
    for(int i =1;i<=n;i++)
    {
        cin >> s >> s1 >> n1;
        for(int j=1;j<=n1;j++)
        {
            cin >> s2 >> cr;
            sum+=cr;
            ans+= m[s2]*cr;
        }
        m1[make_pair(s,s1)]=(float)ans/sum;
        sum =0;
        ans=0;
    }
    for(auto i : m1)
    {
        v.push_back(i);
    }
    sort(v.begin(),v.end(),cmp);
    for(auto i : v)
    {
        cout << i.first.first << " " << i.first.second << " " << fixed << setprecision(3) << i.second << endl;
    }
}
#include <bits/stdc++.h>
using namespace std;
void print(int n){
    cout << n << endl;
}
int main()
{
    int n;
    cin >> n;
    vector<int> ans;
    for(int i = 100; i <= 999; ++i)
    {
        if(n == (i % 10) + (i/10 % 10) + (i/100))
        {
            ans.push_back(i);
        }
    }
    for_each(ans.begin(),ans.end(),print);
}
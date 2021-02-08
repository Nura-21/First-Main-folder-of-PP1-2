#include <bits/stdc++.h>
using namespace std;
void f(int n)
{
    cout << n << " ";
}
int main(){
    int n;
    vector<int> v1;
    while( n != 0)
    {
        cin >> n;
        v1.push_back(n);
    }
    vector<int> v2(9);
    for(int i = 0; i < v1.size(); ++i)
    {
        if( v1[i] ==1 ) v2[0]++;
        else if(v1[i] == 2) v2[1]++;
        else if(v1[i] == 3) v2[2]++;
        else if(v1[i] == 4) v2[3]++;
        else if(v1[i] == 5) v2[4]++;
        else if(v1[i] == 6) v2[5]++;
        else if(v1[i] == 7) v2[6]++;
        else if(v1[i] == 8) v2[7]++;
        else if(v1[i] == 9) v2[8]++;
    }
    for_each(v2.begin(),v2.end(),f);
}
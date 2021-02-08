#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
int main() {
    int n, p, q, a1, b1, all[100];
    cin >> n >> p;
    for (int i=0;i<p;i++) 
    {
        cin >> a1;
        all[a1 - 1] = 1;
    }
    cin >> q;
    for (int i =0;i<q;i++) 
    {
        cin >> b1;
        all[b1 - 1] = 1;
    }
    if (*min_element(all,all+n) == 1) 
    {
        cout << "I become the guy.";
    } 
    else 
    {
        cout << "Oh, my keyboard!";
    }
}

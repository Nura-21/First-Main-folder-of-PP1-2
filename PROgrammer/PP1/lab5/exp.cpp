#include <iostream>
#include<bits/stdc++.h> 
using namespace std;

int main(){

    string s,g;
    int l=s.size();
    cin >> s;
    int cnt = 0;
    size_t pos = 0;
    int no=0;
    g=s;
    reverse(g.begin(),g.end());
    cout<<s<<" "<<g;
    return 0;
}
//Turdalin Nurassyl задача И
#include <bits/stdc++.h>
using namespace std;
bool getNumber(int n){
    int t = 0;
    set<int> s;
    while(n){
        s.insert(n%10);
        n/=10;
        t++;
    }
    return t == s.size();
}
int main(/*Turdalin Nurassyl*/){
    int n; 
    cin >> n;
    n++;
    while(!getNumber(n)){
        n += 1;
    }
    cout << n;
}
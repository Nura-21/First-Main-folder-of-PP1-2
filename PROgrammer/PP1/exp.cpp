#include <bits/stdc++.h>
using namespace std;
long long int cycle(long long n, long long num, long long sum){
    if (num-n==1) return sum;
    sum+=num;
    return cycle(n, num+1, sum);
}
int main(){
    long long n;
    cin >> n;
    cout << cycle(n, 1, 0);
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
long long cnt=-1;
long long g(){
    cnt++;
    long long res=1;
    for(int i=0;i<cnt;++i){
        res*=cnt;
    }
    return res;
}
void f(long long x){
    cout << x << " ";
}
int main(){
    long long en;
    cin>>en;
    vector<long long> v(en+1);
    generate(v.begin(),v.end(),g);
    for_each(v.begin(),v.end(),f);
}


#include <iostream>

using namespace std;

int main(){

    long long n,m,i,sum=0;
    cin >>n>>m;
    int a[n];

    for( i = 1; i <= n; i++)
    { 
        cin >> a[i];
    }

    for( i = 1 ; i <= n ; ++i){
        if(a[i] <= m)
        ++sum; 
        else if(a[i] > m);
        }
    cout<<sum<<" ";
    return 0;
}
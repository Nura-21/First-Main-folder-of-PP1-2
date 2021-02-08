#include <iostream>

using namespace std;

int main(){

    long long n,l,r,i;
    cin >>n>>l>>r;
    int a[n];

    for(int i =1; i <= n; i++)
    { 
        cin >> a[i];
    }

    for(int i = 0; i <= (r-l)/2; i++){
        //cout<<a[l]<<" _ ";
        //cout<<a[r-1]<<" _ ";
        swap(a[l],a[r-1]); 
        }
    for(int i = 1;i<=n;i++)
        cout<<a[i]<<" ";
    return 0;
}
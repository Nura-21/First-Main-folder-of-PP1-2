#include <iostream>

using namespace std;

int main(){

    long long n,l,r,sum=0;
    cin >>n>>l>>r;
    int a[n];

    for(int i =1; i < n; i++)
    { 
        cin >> a[i];
    }

    for(int i = l; i <= r; i++){
        sum+=a[i];
        }
    cout<<sum;
    return 0;
}
#include <iostream>

using namespace std;

int main(){

    int n;
    cin >> n;
    long long a[n];

    for(long long i = 0; i < n; i++){
        cin >> a[i];
    }

   long long t = a[0],sum=0;

    for(long long i = 0; i < n; ++i){
    
        sum+=a[i];
    }
    cout << sum;
    
    return 0;
}
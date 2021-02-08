#include <iostream>
using namespace std;
int main(){
    int n, k, j=0;
    cin >> n >> k;
    int a[n];
    for (int i=0; i<n; i++){
        cin >> a[i];
    }
    int cnt=0;
    while(j<n){
    for (int i=0; i<n; i++){
        if (i!=j){
            if (a[i]+a[j]==k) cnt ++;
        }   
    }
    j++;
    }
    if (cnt>0) cout << "YES";
    else cout << "NO";
}
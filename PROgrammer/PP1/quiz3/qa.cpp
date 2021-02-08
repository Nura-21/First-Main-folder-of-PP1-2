#include <iostream>
#include <map>
using namespace std;
int main(){
    int n, x, k, t;
    cin >> n;
    map <int , int > ans;
    for(int i=0; i<n; i++){
        cin >> x;
        ans[x]++;
    }
    cin >> k;
    for (int i=0; i<k; i++){
        cin >> t;
        cout << ans[t]<<endl;
    }
    return 0;
}
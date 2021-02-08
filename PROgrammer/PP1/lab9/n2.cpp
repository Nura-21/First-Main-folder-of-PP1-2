#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector <int> a;
    for(int i=0;i<n;i++){
        int x; cin >> x;
        a.push_back(x);
    }
    int cnt=0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(i<j && j<=n){
                int k=a[i]^a[j];
                if(find(a.begin(),a.end(),k) != a.end()){
                    cnt++;
                }
            }
        }
    }
    cout << cnt;
    return 0;
}
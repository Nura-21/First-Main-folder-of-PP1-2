#include <iostream>
using namespace std;
//binary search
bool find3(int * a, int l, int r, int x){
    if(l == r){
        if(a[l] == x) return true;
        else return false;
    }
    int m = (l + r) / 2;
    if(a[m] < x) return find3(a, m + 1, r, x);
    return find3(a, l, m, x);
}

int main(){
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; ++i){
        cin >> a[i];
    }
    int x;
    cin >> x;

    if(find3(a, 0, n - 1, x)){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }

    return 0;
}
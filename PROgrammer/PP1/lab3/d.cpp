#include <iostream>

using namespace std;

int main(){

    int n;
    cin >> n;
    int a[n];

    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    int t = a[0],m=0;

    for(int i = 1; i < n; ++i){
        if(a[i] > t){
            t = a[i];
            m=i;
        }
    }

    cout << m+1 << endl;
    
    return 0;
}
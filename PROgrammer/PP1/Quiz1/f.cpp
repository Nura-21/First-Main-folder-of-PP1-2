#include <iostream>
using namespace std;
int main () {
    int d,c,p,n;
    cin>>d>>c>>p>>n;
    int all;
    all=(d*100)+c;
    int k=(p*n);
    int f;
    f=all-k;
    f/=100;
    cout<< f <<" "<< (all-k)%100 << endl;
    return 0;
}
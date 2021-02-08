#include <iostream>
 using namespace std;
 int main () {
    int n,n1,n2,n3;
    cin>>n;
    n1=n;
    n1/=100;
    n2=n;
    n2/=10;
    n2%=10;
    n3=n;
    n3%=10;
    cout << n1+n2+n3<<endl;
    return 0;
 }
#include <iostream>
using namespace std;
#include <iostream>
using namespace std;

double power (double a, int n){
    double res = 1;

    for(int i = 0; i < n; ++i){
        res = res * a;
    }

    return res;
}
int main(){
    int a,n;
    cin>>a>>n;
    cout<<power(a,n);
    return 0;
}
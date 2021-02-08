#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int a,b;
    int c=109;
    cin>>a>>b;
    //if(a < 0);
    //a = fabs(a);
    int d=a*b;
    if(c<d)
    c=fabs(c);
    else if(c>d)
    c=-fabs(c);
    cout<<((a*b)-c)<<endl;
    return 0;
}
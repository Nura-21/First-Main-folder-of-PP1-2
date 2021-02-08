#include <iostream>
using namespace std;
 
int main() {
    int a,b,c,t,total;
    cin>>a>>b>>c>>t;
    if(a>=t)
    {
        total=a*b;
    }
    else
    {
        total=a*b+c*10;
    }
    cout<<total;
    return 0;
}
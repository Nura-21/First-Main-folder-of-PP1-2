#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int n1,n2,n3;   
    n1=n/6; n2=n1;  //1x+4x+1x=6x
    n3=n-(n1+n2);
    cout<<n1<<" "<<n3<<" "<<n2;
}
#include <iostream>
using namespace std;
void maxs(int n1,int n2,int n3,int n4){
    cout<<max(max(n1,n2),max(n3,n4));
}
int main(){
    int n,m,k,p;
    cin>>n>>m>>k>>p;
    maxs(n,m,k,p);
    return 0;
}

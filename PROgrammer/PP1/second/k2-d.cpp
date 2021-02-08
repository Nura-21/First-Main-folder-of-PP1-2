#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    int nn=0;
    int nel=0;
    for(int i=0;i<n;++i){
        nel+=nn+1+i;
        cout<<nel<<" ";
    }
}
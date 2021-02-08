#include <iostream>
using namespace std;
int main(){
    int n,prev,all=0;
    cin>>prev>>n;
    while(n!=0){
        if(n>prev)
        ++all;
        prev=n;
        cin>>n;
    }
    cout<<all;
    return 0;
}
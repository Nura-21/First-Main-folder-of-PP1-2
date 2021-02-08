#include <iostream>
using namespace std;
void factor(int n){
    if(n==1) return;
    int num=2;
    while(n % num != 0) num++;
    cout<<num<<" ";
    factor(n/num);
}
int main(){
    int n;
    cin>>n;
    factor(n);
}
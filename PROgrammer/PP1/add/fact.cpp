#include <iostream>
using namespace std;

int Fact(int N){
    if(N==0) return 1;
    if(N==1) return 1;
    return N * Fact(N-1);
}
int main(){
    int n;
    cin>>n;
    cout<<Fact(n)<<endl;
    return 0;
}
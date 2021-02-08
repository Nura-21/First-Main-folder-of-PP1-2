#include <iostream>
using namespace std;
double per(double n,double m){
    cout<<(m/n)*100<<endl;
    return 0;
}
int main(){
    int n,m;
    cin>>n>>m;
    per(n,m);
    return 0;
}
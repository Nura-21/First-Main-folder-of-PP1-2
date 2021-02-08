#include <bits/stdc++.h>  
using namespace std;  
int low(int n){
    if(n==1) return 1;
    else if (n %2 != 0) return 0;
    n=n/2;
    return low(n); 
} 
int main(){
    int n;
    cin>>n;
    if(low(n)==1){cout<<"Yes"<<endl;}
    else{cout<<"No";}
}
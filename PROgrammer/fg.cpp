#include <bits/stdc++.h>
using namespace std;
bool isPrime(int someint){
    int deliteli=0;
    for(int i=1;i<=someint;++i){
        if(someint % i == 0){deliteli++;}
    }
    if(deliteli>2){return false;}
    return true;
}
int main(){
    int n;
    cin>>n;
    int first=3,second=n-3;
    for(int i=0;i<n;++i){
        if(isPrime(first)==true && isPrime(second)==true){
            cout<<first<<" "<<second;
            break;
        }
        else{first++;second--;}
    }
}
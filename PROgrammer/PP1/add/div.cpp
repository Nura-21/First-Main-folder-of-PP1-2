#include <iostream>
using namespace std;
int main(){
    int n;
    int a[1000];
    int cnt=0;
    for(int i=1;i<=10000;++i){
        if(a[i]%3==0 && a[i]%5==0 && a[i]%7==0 && a[i]%11==0){cnt++;}
    }
    cout<<cnt;
    return 0;
}
#include <iostream>

using namespace std;

int main(){

    int n,max=-111111111,min=11111111;
    cin >> n;
    int a[n];

    for(int i = 0; i < n; i++){
        cin >> a[i];
        if(a[i]>max)
        max=a[i];
        if(a[i]<min)
        min=a[i];
    }

    int t = a[0];

    for(int i = 0; i <n; ++i){
        if(a[i]==max) a[i]=min;
        }
    for(int i = 0; i <n; ++i){
    cout<<a[i]<<" ";}
    return 0;
}
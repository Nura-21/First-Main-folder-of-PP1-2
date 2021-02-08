#include <iostream>
#include <algorithm>
using namespace std;
void readArray(int * a, int n){
    for(int i = 0; i < n; ++i){
        cin>>a[i];
    }
}
void rev(int * a,int n){
    reverse(a,a+n);
}
void printArray(int * a, int n){
    for(int i = 0; i < n; ++i){
        cout << a[i] << " "; 
    }
    cout << endl;
}
int main(){
    int n;
    cin>>n;
    int a[n];
    readArray(a,n);
    rev(a,n);
    printArray(a,n);
    return 0;
}
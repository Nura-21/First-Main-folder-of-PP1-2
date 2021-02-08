#include<iostream>
using namespace std;
int Keib(unsigned long long int k, int n){
    unsigned long long int ans;
    if(n == 1) return 0;
    if(n == 2) return 1;
    return (Keib(k, n - 2) + k * Keib(k, n - 1))%10;
}
int main(){
    unsigned long long int k;
    int en;
    cin >> k >> en;
    cout << Keib(k, en);
    return 0;
}
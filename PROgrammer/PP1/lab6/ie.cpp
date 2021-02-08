#include <iostream>
using namespace std;
void check(int n){
    cin>>n;
    bool isPrime = true;
    if (n == 0 || n == 1) {
        isPrime = false;
    }
    else {
        for (int i = 2; i <= n / 2; ++i) {
            if (n % i == 0) {
                isPrime = false;
                break;
            }
        }
    }
    if (isPrime)
        cout << "prime";
    else
        cout << "composite";
}
int main(){
    int n;
    check(n);
    return 0;
}
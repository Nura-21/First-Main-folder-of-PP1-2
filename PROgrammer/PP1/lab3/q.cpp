#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int n;
    bool prime=true;
    cin>>n;
    if (n == 0 || n == 1 )
     prime = false;
    else{
        for (int i = 2; i <= n / 2; ++i) {
            if (n % i == 0) {
                prime = false;
                break;
            }
        }
    }
    if (prime)
        cout << "Yes";
    else
        cout << "No";

    return 0;
}
#include <iostream>
#include <cmath>
using namespace std;
int main() {
   int a, a1, a2, a3;
    cin >> a;
    a1 = a / 100;
    a %= 100;
    a2 = a / 10;
    a %= 10;
    a3 = a;
    cout << a1 + a2 + a3;
    return 0;
}
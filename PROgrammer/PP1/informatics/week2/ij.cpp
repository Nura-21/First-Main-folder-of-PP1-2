#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int a,b;
    cin>>a;
        if ( a % 2 == 0 ) { // Проверка на чётность
            cout << a+2 << endl;
        }
        else {
            cout << a+1 << endl;
        }
    return 0;
}
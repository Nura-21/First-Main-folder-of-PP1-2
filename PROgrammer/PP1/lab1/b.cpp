#include <iostream>
using namespace std;
int main()
{
    int a;
    int b, b1, b2;
    cin >> a;
    cin >> b;
    b1 = b / 100;
    b %= 10;
    b2 = b;
    cout << a + (b1 + b2)<< endl;
    return 0;
}

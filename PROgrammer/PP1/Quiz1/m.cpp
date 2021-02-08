#include <iostream>
using namespace std;
int main() {
    double e,p;
    cin>>e>>p;
    double total;
    total=e*(p/100)+e;
    printf("%.2f",total);
    return 0;
}
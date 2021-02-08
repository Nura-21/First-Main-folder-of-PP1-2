#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main(){
    int x1,x2,y1,y2;
    double l;
    cin >> x1>>y1>>x2>>y2;
    l=((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
    l=sqrt((l));
    printf("%.10f\n", l);
    return 0;
}
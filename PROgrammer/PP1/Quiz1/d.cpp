#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main(){
    float a,b;
    cin>>a>>b;
    cout<< "Usual division: " << a/b <<endl;
    cout<< "Division without remainder: " << int(a/b)<<endl;
    cout<< "Remainder: " << int(a) % int(b) <<endl;
    return 0;
}
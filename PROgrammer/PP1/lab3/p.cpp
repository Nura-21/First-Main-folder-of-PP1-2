#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int x;
    cin>>x;
    if ( int(sqrt(x)) == float(sqrt(x)))
        cout << "Yes"<<endl;
    else
    {
        cout << "No"<<endl;
    }
    
    return 0;
}
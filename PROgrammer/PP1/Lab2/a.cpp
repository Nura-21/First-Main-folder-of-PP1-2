#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int a,b;
    cin>>a;
        if (a <=0){
            cout<< "None" <<endl;
        }
        else if ( a % 2 == 0 ) {  // Проверка на чётность
            cout << "Even" << endl;
        }
        else {
            cout << "Odd" << endl;
        }
    return 0;
}
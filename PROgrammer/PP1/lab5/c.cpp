#include <iostream>

using namespace std;


int main(){

    string str;
    string x;

    cin >> str>>x;

    if(str.find(x) == string::npos) cout << "NO";
    else cout << "YES";

    return 0;
}
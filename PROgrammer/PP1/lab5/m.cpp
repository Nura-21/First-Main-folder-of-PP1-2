#include <iostream>

using namespace std;


int main(){

    string text;
    string pattern;
    int n;
    cin >> text >> pattern>>n;

    int cnt = 0;
    size_t pos = 0;

    while((pos = text.find(pattern, pos)) < string::npos){
        cnt++;
        pos++;
    };
    if(n==cnt){cout<<"YES"<<endl;}
    else{cout<<"NO"<<endl;}

    return 0;
}
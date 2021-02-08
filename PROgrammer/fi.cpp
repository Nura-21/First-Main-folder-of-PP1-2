#include <bits/stdc++.h>
using namespace std;

string shorttt(string a, string b){
    for (int i = 0; i < a.size(); i++){
        for (int j = 0; j < b.size(); j++){
            if(a.substr(i, a.size() - i) == b.substr(0, b.size() - j)){
                b.erase(0, (a.substr(i, a.size())).size());
            }
        }
    }
    return a + b;
}

int main(){
    //freopen("input.txt", "r", stdin);

    string a, b, ans1, ans2;
    cin >> a >> b;
    string c = b, d = a;
    if (shorttt(a, b).size() > shorttt(b, a).size()) cout << shorttt(b, a);
    else cout << shorttt(a, b);

    return 0;
}
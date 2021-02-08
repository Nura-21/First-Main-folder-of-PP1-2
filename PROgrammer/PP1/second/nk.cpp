#include <bits/stdc++.h>
using namespace std;
int main(){
int x, y, z;
int temp=0;
int counter=0;
int n;
vector <int> a;
vector <int> b;
cin >> x >> y >> z;
cin >> n;
for(int i=0; i<n; i++){
    int w;
    cin >> w;
    a.push_back(w);
}
for(int i=0; i<n; i++){
    int d;
    cin >> d;
    b.push_back(d);
}
vector<int> vec;
for(int i=0;i<n;++i){vec.push_back(pow(z,a[i]));}

for(int i=x; i<=y; i++){
    for(int j=0;j<n; j++){
        //int check=pow(z,a[j]);
        if (i%vec[j]==b[j]){
            temp++;
        }
    }
    if (temp == n) {
        counter++;
    }
    temp = 0;
}
cout << counter;
}
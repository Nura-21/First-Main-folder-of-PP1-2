#include <bits\stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;++i){
        cin>>v[i];
    }
    auto res = accumulate(v.begin(),v.end(),0); // сумма
    cout<<res;
    auto res2 = accumulate(v.begin(),v.end(),1,[](int a,int b){
        return a * b;
    }); // умножение всех элементов
    cout<<res2;
}
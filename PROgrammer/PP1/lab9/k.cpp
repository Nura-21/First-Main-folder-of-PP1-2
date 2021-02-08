#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> v(n);
    int mx=-1;
    int it=0;
    for(int i=0;i<n;++i){
        cin>>v[i];
        if(mx<v[i]){mx=v[i];
        it=i;}
    }
    cout<<mx+it;
}
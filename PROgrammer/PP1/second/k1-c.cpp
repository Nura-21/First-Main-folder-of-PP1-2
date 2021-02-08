#include <iostream>
using namespace std;
void badp(int l,int r){
    for(int i=l;i<r;++i){
        if(i % 7 == 1 || i % 7 == 2 || i % 7 ==5){cout<<i<<" ";}
    }
}
int main(){
    int l,r;
    cin>>l>>r;
    badp(l,r);
}
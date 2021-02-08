#include <iostream>
using namespace std;
void elect(int * xyz){
    bool Election(bool x, bool y, bool z);
    for(int i=0;i<3;++i){
        cin>>xyz[i];
    }
    for(int i=1;i<3;++i){
        if(xyz[i]==xyz[i-1]){cout<<xyz[i];break;}
    }
}
int main(){
    int a[3];
    elect(a);
    return 0;
}
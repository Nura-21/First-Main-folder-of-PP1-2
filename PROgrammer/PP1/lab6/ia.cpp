#include <iostream>
using namespace std;
void mins(int n1,int n2,int n3,int n4){
    cout<<min(min(n1,n2),min(n3,n4));
}  
int main(){
    int n1,n2,n3,n4;
    cin>>n1>>n2>>n3>>n4;
    mins(n1,n2,n3,n4);
    return 0;
}
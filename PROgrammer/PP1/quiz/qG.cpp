//Turdalin Nurassyl задача Джи
#include <iostream>
using namespace std;
int grecurs(int someinteger,int divisor,string probel){
    if(someinteger==1) return someinteger;
    while(someinteger % divisor != 0) divisor++;
    cout<<divisor<<probel;
    return grecurs(someinteger/divisor,divisor,probel);
}
int main(/*Turdalin Nurassyl*/){
    int en;
    cin>>en;
    int divisor=2;
    string probel=" ";
    grecurs(en,divisor,probel);
}
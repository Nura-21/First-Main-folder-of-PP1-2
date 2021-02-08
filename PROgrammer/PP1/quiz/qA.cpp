//Turdalin Nurassyl задача Эй
#include <iostream>
bool isPrime(int kakoitoint){
    int kol=0;
    for(int i=1;i<=kakoitoint;++i){
        if(kakoitoint % i == 0){kol++;}
    }
    if(kol>2){return false;}
    else return true;
}
int findprimeforvanya(int kakoitoint,int zero){
    double i;
    for(i=2;zero<kakoitoint;i++){
        if(isPrime(i)){
            zero++;
        }
    }
    return i-1;
}
using namespace std;
int main(/*Turdalin Nurassyl*/){
    int someint;
    cin>>someint;
    int zero = 0;
    cout<<findprimeforvanya(someint,zero);
}

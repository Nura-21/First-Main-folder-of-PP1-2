//Turdalin Nurassyl задача Эй
#include <iostream>
#include <vector>
using namespace std;
bool isPrime(int someint){
    int deliteli=0;
    for(int i=1;i<=someint;++i){
        if(someint % i == 0){deliteli++;}
    }
    if(deliteli>2){return false;}
    return true;
}
void pechatprime(int someint){
    vector<int> allprimes;
    for(int i=1;i<=7920;++i){
        if(isPrime(i)){allprimes.push_back(i);}
    }
    cout<<allprimes[someint];
}
int main(/*Turdalin Nurassyl*/){
    int en;
    cin>>en;
    pechatprime(en);
}
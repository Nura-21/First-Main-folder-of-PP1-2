#include <iostream>
using namespace std;
void readandcount(int n,double evenc,double oddc,double all){
    while(n>=0){cin>>n;++all;
    if(n % 2==0){evenc++;}
    else{oddc++;}
    if(n<0 and n%2==0){--evenc;}
    else if(n<0 and n % 2 != 0){--oddc;}
    }
    cout<<all<<" "<<evenc<<" "<<oddc<<endl;
    cout<<(evenc/all)*100<<"% "<<100-(evenc/all)*100<<"%";   
}
int main(){
    int n;
    cin>>n;
    if(n % 2 == 0){readandcount(n,1,0,0);}
    else{readandcount(n,0,1,0);}
}
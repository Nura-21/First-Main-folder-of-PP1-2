#include <iostream>
using namespace std; 
int main(){
    int n;
    cin>>n;
    if(n>=1 && n<=4){cout<<"Few";}
    if(n>=5 && n<=9){cout<<"Several";}
    if(n>=10 && n<=19){cout<<"Pack";}
    if(n>=20 && n<=49){cout<<"Lots";}
    if(n>=50 && n<=99){cout<<"Horde";}
    if(n>=100 && n<=249){cout<<"Throng";}
    if(n>=250 && n<=499){cout<<"Swarm";}
    if(n>=500 && n<=999){cout<<"Zounds";}
    if(n>=1000){cout<<"Legion";}
    return 0;
}
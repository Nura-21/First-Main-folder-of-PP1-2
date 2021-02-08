#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int dayn;
    if(s=="MON"){dayn=1;}
    else if(s=="TUE"){dayn=2;}
    else if(s=="WED"){dayn=3;}
    else if(s=="THU"){dayn=4;}
    else if(s=="FRI"){dayn=5;}
    else if(s=="SAT"){dayn=6;}
    else if(s=="SUN"){dayn=0;}
    cout<<7-dayn;
}
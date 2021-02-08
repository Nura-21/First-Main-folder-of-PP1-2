#include <bits/stdc++.h>
using namespace std;
int main(){
    int sum;
    cin>>sum;
    while(1>0){
        char x;
        cin>>x;
        int m;
        cin>>m;
        if(x=='+'){sum+=m;}
        if(x=='-'){sum-=(m);}
        if(x=='*'){sum*=(m);}
        if(x=='/'){sum/=(m);}
        cout<<sum<<endl;
    }
}
#include <bits/stdc++.h>
using namespace std;
int main(){
    string w1,w2;
    cin>>w1>>w2;
    if(w2==w1){cout<<0<<endl;return 0;}
    int time=0;
    string nws1=w1,nws2=w2;
    sort(nws1.begin(),nws1.end());
    sort(nws2.begin(),nws2.end());
    if(nws1==nws2) {
        while(w1!=w2){
            char first=w2[0];
            w2.erase(w2.begin()+0);
            w2+=first;
            ++time;
        }
        cout<<time<<endl;
    }
    else{cout<<"Understandable have a nice day"<<endl;}
}
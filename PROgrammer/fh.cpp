#include <bits/stdc++.h>
using namespace std;
int main(){
    string plt,key,res;
    cin>>plt>>key;
    int j=0;
    for(int i=0;i<plt.size();++i){
        res[i]=(((plt[i]-97)+(key[j]-97))%26)+97;
        ++j;
        if(j==6){j=0;}
    }
    for(int i=0;i<plt.size();++i){
        cout<<res[i];
    }
}
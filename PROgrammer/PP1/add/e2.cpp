#include <iostream>
using namespace std;
int main(){
    string s;
    cin>>s;
    int cnt=0;
    for(int i=0;i<=s.size();++i){
        int code=int(s[i]);
        if(code==+i){cnt++;
        cout<<i<<": "<<endl;}
    }
    return 0;
}
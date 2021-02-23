#include <iostream>
using namespace std;
int rec(string s,int i,int sum){
    if(i==s.size()){return sum;}
    return rec(s,i+1,sum+int(s[i]-'0'));
}
int main(){
    string s;
    cin>>s;
    int sum = 0;
    sum = rec(s,0,sum);
    cout<<sum<<endl;
    if(sum%2==0){
        cout<<"The sum is even."<<endl;
    }
    else{cout<<"The sum is odd."<<endl;}
}
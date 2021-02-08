#include <iostream>
using namespace std; 
int main(){
    string s;
    cin>>s;
    bool iscor=false;
    for(int i=0;i<s.size();++i){
    if(s[0]>='A' && s[0]<='Z'){iscor=true;}
    else{iscor=false;break;}
    if(s[1]>='0' && s[1]<='9' && s[2]>='0' && s[2]<='9' && s[3]>='0' && s[3]<='9'){iscor=true;}
    else{iscor=false;break;}
    if(s[5]>='A' && s[5]<='Z'){iscor=true;}
    else{iscor=false;break;}
    }
    if(iscor){cout<<"Yes"<<endl;}
    else{cout<<"No"<<endl;}
}
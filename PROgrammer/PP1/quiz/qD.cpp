//Turdalin Nurassyl задача Ди
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;
bool check1(string w1,string w2,int l1,int l2){
    if(l1!=l2){return false;}
    for(int i=0;i<l1;++i){
        if(tolower(w1[i])==tolower(w2[i])) {return true;} 
        if(tolower(w1[i])!=tolower(w2[i])) {
            if( w1[i]=='p' || w1[i]=='i' || w1[i]=='b' || w1[i]=='e' && w2[i]=='p' || w2[i]=='i' || w2[i]=='b' || w2[i]=='e'  ){return true;}
            else{return false;}
        }  
    }

}

int main(/*Turdalin Nurassyl*/)
{
int en;
cin>>en;
bool ans[en];
ans[en]=0;
for(int i=0;i<en;++i){
    string w1,w2;
    cin>>w1>>w2;
    int l1=w1.size();
    int l2=w2.size();
    if(check1(w1,w2,l1,l2) ==true){ans[i]=true;}
}
for(int i=0;i<en;++i){
    if(ans[i]==true){cout<<"Yes"<<endl;}
    else{cout<<"No"<<endl;}
}
}
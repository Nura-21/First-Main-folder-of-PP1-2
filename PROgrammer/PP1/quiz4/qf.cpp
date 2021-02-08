//Turdalin Nurassyl задача ЭФ
#include <bits/stdc++.h>
using namespace std;
int main(/*Turdalin Nurassyl*/){
    string word;
    vector<string> vec;
    getline(cin,word);
    /*while(cin>>word){
        vec.push_back(word);
    }*/
    string nll="";
    int wrds=word.size();
    for(int i=0;i<wrds;++i){
        if(i==wrds-1 || word[i]==' '){
            vec.push_back(nll);
            nll="";
        }
        else{nll+=word[i];}
    }
    int mx=-212121;
    //vector<string> ans; 
    string ans;
    for(int i=0;i<vec.size();++i){
        int vs=vec[i].size();
        if(mx<vs){mx=vs;ans=vec[i];}
    }
    cout<<ans;
}
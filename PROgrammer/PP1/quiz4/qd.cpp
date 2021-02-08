//Turdalin Nurassyl задача ДИ
#include <bits/stdc++.h>
using namespace std;
int main(/*Turdalin Nurassyl*/){
    string word,cheword; 
    cin>>word>>cheword; 
    vector<int> ans;
    int begunok=0;
    int wrds=word.size();
    int chws=cheword.size();
    while(begunok<wrds){
        if(cheword==word.substr(begunok, chws))
        {ans.push_back(begunok);}
        ++begunok;
    }
    for(int i=0;i<ans.size();++i){
        cout<<ans[i]<<" ";
    }
}

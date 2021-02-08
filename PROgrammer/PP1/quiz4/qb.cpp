//Turdalin Nurassyl задача БИ
#include <bits/stdc++.h>
using namespace std;
int main(/*Turdalin Nurassyl*/){
    string word;
    cin>>word;
    string main="zyxwvutsrqponmlkjihgfedcba"; //abcdefghijklmnopqrstuvwxyz
    vector<int> id;
    for(int i=0;i<word.size();++i){
        id.push_back(int(word[i]-'a'));
        word[i]=main[id[i]]; 
    }
    //cout<<main.size();
    cout<<word<<"\n";
}
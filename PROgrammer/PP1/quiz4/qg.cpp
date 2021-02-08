//Turdalin Nurassyl задача ДЖИ
#include <bits/stdc++.h>
using namespace std;
int main(/*Turdalin Nurassyl*/){
    int en;
    cin>>en;
    int top,tlr;
    cin>>top>>tlr;
    string word;
    cin>>word;
    int topcnt=0,tlrcnt=0;
    for(int i=0;i<word.size();++i){
        if( word[i]>='A' && word[i]<='Z'){topcnt++;}
        else{tlrcnt++;}
    }
    vector<int> vec(2);
    vec[0]=topcnt*top;
    vec[1]=tlrcnt*tlr;
    cout<<min(vec[0],vec[1]);
}
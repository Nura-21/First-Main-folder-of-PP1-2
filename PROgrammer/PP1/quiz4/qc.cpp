//Turdalin Nurassyl задача СИ
#include <bits/stdc++.h>
using namespace std;
int main(/*Turdalin Nurassyl*/){
    string word;
    cin>>word;
    cout<<"The anagram variants for string "<<word<<" are:"<<"\n";
    sort(word.begin(),word.end()); // cat -> act
    do{cout<<word<<endl;}
    while(next_permutation(word.begin(),word.end()));
}
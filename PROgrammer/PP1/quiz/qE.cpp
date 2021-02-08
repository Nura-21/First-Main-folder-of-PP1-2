//Turdalin Nurassyl задача И
#include <iostream>
#include <set>
#include <vector>
using namespace std;
int main(/*Turdalin Nurassyl*/){
    int en;
    cin>>en;
    vector<int> arr;
    set<int> cop;
    for(int i=0;i<en;++i){
        int arrn;
        cin>>arrn;
        arr.push_back(arrn);
        cop.insert(arrn);
    }
    if(arr.size() == cop.size()){cout<<"YES";}
    else{cout<<"NO";}
}
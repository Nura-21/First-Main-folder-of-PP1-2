#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> ve;  
    vector<int> vo; 
    for(int i=0;i<n;++i){
        int x;
        cin>>x;
        if(x % 2==0){ve.push_back(x);}
        else{vo.push_back(x);}
    }
    sort(ve.begin(),ve.end());
    sort(vo.begin(),vo.end());
    reverse(ve.begin(),ve.end());
    for(int i=0;i<ve.size();++i){
        cout<<ve[i]<<" ";
    }
    for(int i=0;i<vo.size();++i){
        cout<<vo[i]<<" ";
    }
}
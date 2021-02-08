#include <iostream>
#include <vector>
using namespace std;
int main(){
    int en;
    cin>>en;
    vector<int> vec1;
    vector<int> vec2;
    for(int i=0;i<en;++i){
        string s;
        cin>>s;
        int k1,k2;
        k1=int(s[0]-'A');
        k2=int(s[1]-'0'-1);
        vec1.push_back(k1);
        vec2.push_back(k2);
    }
    /*for(int i=0;i<vec1.size();++i){
        cout<<vec1[i]<<" ";
    }
    for(int i=0;i<vec2.size();++i){
        cout<<vec2[i]<<" ";
    }*/
    int k=0;
    char chess[8][8];
    for(int i=0;i<8;++i){
        for(int j=0;j<8;++j){
            chess[i][j]='0';
        }
    }
    while(k<en){
    for(int i=0;i<8;++i){
        for(int j=0;j<8;++j){
            chess[vec1[k]][vec2[k]]='*';
        }
    }
    ++k;
    }
    for(int i=0;i<8;++i){
        for(int j=0;j<8;++j){
            cout<<chess[i][j];
        }
        cout<<endl;
    }
}
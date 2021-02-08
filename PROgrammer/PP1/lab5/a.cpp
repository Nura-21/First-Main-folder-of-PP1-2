#include <iostream>

using namespace std;

int main(){
    string s;
    cin >> s;
    int cnts=0;
    int cntc=0;
    for(int i=0;i<s.size();++i){
        int code=int(s[i]);
        if(code<=90 && code>=65){
            cntc++;
        }
        else{
            cnts++;
        }
    }
    cout<<cnts<<" "<<cntc<<endl;
    return 0; 
}
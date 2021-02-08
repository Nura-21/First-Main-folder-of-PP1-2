#include <iostream> 
#include <map> 
using namespace std;

int main(){
    map <string, int> m;
    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        string s;
        cin >> s;
        if(m[s]>=1){
            cout<<"user already exists"<<endl;
        }else{
            cout<<"new user added"<<endl;
            m[s]++;
        }
    }
    return 0;
}
#include <iostream>
using namespace std;
int main(){
    string s;
    cin>>s;
    int l=s.size();
    int t=int(s[0]);
    for(int i=0;i<l;++i)
    {
        if(int(s[i]) > t)
        {
            t = int(s[i]);
        }
    }
    cout<<char(t)<<endl;
    return 0;
}
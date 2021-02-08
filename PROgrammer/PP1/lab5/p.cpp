#include <iostream>
using namespace std;
int main()
{
    string s,g;
    cin>>s;
    int l=s.size();
    for(int i=0;i<l;++i)
    {   
        int code=int(s[i]);
        if(code==122)
        {   
            cout<<char(int(s[i])-25);
        }
        else{cout<<char(int(s[i])+1);}
    }

    return 0;
}
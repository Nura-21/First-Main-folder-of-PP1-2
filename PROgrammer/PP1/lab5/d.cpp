#include <iostream>
using namespace std;
int main(){
    string s;
    cin>>s;
    int l=s.size();
    if(l<=2)
    {system("pause");}
    else if(l % 2==0)
    {   
        int fi=0;
        int la=0;
        string n1=s;
        n1.erase(l/2);
        string n2=s;
        n2.erase(0,l/2);
        for(size_t i=0;i<l/2;++i)
        {   
            fi+=s[i];
        }
        for(size_t i=l/2;i<l;++i)
        {   
            la+=s[i];
        }
        if(fi==la && s[0]==s[l-1] && s[1]==s[l-2])
        {
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
        for(size_t i=0;i<l;++i)
        {
            
        }
    }
    else if(l=3)
    {
        for(size_t i=0;i<l/2;++i)
        {
            int f=s[0];
            int t=s[l-1];
            if(t==f)
            {
                cout<<"YES"<<endl;
            }
        }
    }
    
    return 0;
}
#include <iostream>
using namespace std;
int main()
{
string s,g;
cin>>s>>g;
int sum1=0;
int sum2=0;
int sum3=0;
int sum4=0;
int l=s.size();
for(int i=0;i<l;++i)
    {
        {if(int(s[i])==int(s[i+1]))
        {
            ++sum1;
        }
        else{
            ++sum2;
        }}
        {
            if(int(g[i])==int(g[i+1]))
        {
            ++sum3;
        }
        else{
            ++sum4;
        }
        }

    }

cout<<sum1<<" "<<sum2<<" "<<sum3<<" "<<sum4<<endl;
return 0;
}
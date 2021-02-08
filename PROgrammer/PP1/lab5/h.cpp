#include <iostream>
using namespace std;
int main()
{
string s;
cin>>s;
int sum1=0;
int sum2=0;
int l=s.size();
for(int i=0;i<=l-1;i++)
    {
        if(int(s[i])==int(s[i+1]))
        {
            ++sum1;
        }
        else{
            ++sum2;
        }
    }

/*if(sum1=sum2){cout<<"YES";}
else{cout<<"NO";}*/
cout<<sum1<<" "<<sum2<<endl;
return 0;
}
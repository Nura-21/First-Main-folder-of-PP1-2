#include <iostream>
using namespace std;
int main()
{
    int a,b,zero=0;
    cin>>a;
    for(int i=0;i<a;i++)
    {cin>>b;
    while(b!=0)
    {if(b%10==0)
    {zero++;
    b/=10;
    }
    else{ b/=10;}}}
    cout<<zero;
    return 0;
} 
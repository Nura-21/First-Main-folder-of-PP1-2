#include <iostream>
using namespace std;
int main(){
    string s;
    int sum1=0;
    int sum2=0;
    cin>>s;
    int l=s.size();
    for(int i=0;i<l;++i)
        {
            if((i+1)%2==0)
            {
                sum1+=s[i]-48;
            }
            else
            {
                sum2+=s[i]-48;
            }
            
        }
        if(sum1==sum2){
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }

    return 0;
    }
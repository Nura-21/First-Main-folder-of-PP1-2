#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int first1,first2,last1,last2;
    first1=n;
    first1=first1/100000;
    first2=n;
    first2=first2/10000;
    first2%=10;
    last1=n;
    last1%=10;
    last2=n;
    last2%=100;
    last2/=10;
    if ((first1+first2)==(last2+last1))
    cout<<"YES"<<endl;
    else
    {
        cout<< "NO" << endl;
    }
    
    return 0;
}
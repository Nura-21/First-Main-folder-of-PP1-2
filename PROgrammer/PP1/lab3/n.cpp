#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    cin>>a[i];
    /*int m;
    int b[m];*/
    for(int i=0;i<n;i++)
    {
        a[i]=a[i]*a[i];
    }
    for(int i=0;i<n;i++)
    cout<<a[i]<<" ";
    return 0;
}
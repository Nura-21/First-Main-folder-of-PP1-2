#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
    cin>>a[i];
    }
    int i=0;
    sort(a,a+n);
    //for(int i = 0; i <n;i++){}
    cout<<(a[n-1] & a[0]);
    return 0;
}
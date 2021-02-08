#include <iostream>
using namespace std;

int main(){
    int n;
    float sum=0,i;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
    cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        sum+=a[i];
    }
    float av;
    av=(sum/n);
    cout<<"Average: "<< av<<endl;
    cout<< "Sum: " << sum<< endl;
    return 0;
    }
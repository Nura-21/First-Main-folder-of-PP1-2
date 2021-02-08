#include <iostream>
#include<stdio.h>
using namespace std;
int main()  
{  
    int n;
    cin>>n;
    int a[n], i,p=0; 
  
    for(i = 0; i < n; i++)  
        cin>>a[i];
    for(i = 0; i < n; i++)  
    {  
        if(a[i] >0){
        ++p;
        }
        else;
    }  
  
    cout<<p;
    return 0;  
}  
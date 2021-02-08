#include <iostream>
#include<stdio.h>
using namespace std;
int main()  
{  
    int n;
    cin>>n;
    int a[n], i, yes = 0, no = 0, zero=0;  
  
    for(i = 0; i < n; i++)  
        scanf("%d", &a[i]);  
  
    for(i = 0; i < n; i++)  
    {  
        if(a[i] == 0)  
            zero++;  
        else if(a[i] % 10 == 7)  
            yes++;  
        else if(a[i] % 10 != 7)  
            no++;  
    }  
  
    printf("%d", yes);  
  
    return 0;  
}  
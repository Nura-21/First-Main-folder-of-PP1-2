#include <bits/stdc++.h>  
using namespace std;  
int sum(unsigned long long int n)  
{  
    if (n == 0)  
    return 0;  
    return (floor((n % 10)/2) + sum(n / 10));  
}  
   
int main()  
{  
    unsigned long long int num;
    cin>>num;   
    cout << sum(num) << endl;  
    return 0;  
}  
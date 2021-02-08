#include <bits/stdc++.h>  
using namespace std;  
void func(int n) 
{
    if(n>1)func(n-1);
    cout<< n <<" ";
}
int main()
{   int n;
    cin>>n;
    func(n);
}
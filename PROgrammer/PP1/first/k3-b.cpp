#include <iostream>
using namespace std;
int checkfibonacci(int n)
        {
         int a=0;
         int b=1;
         if (n==a||n==b) return true;
         int c=a+b;
        while(c<=n)
        {
            if(c==n) return true;
                a=b;
             b=c;
             c=a+b;
        }
        return false;
    }
int main(){
    int n;
    cin>>n;
    if(checkfibonacci(n)){cout<<"YES";}
    else{cout<<"NO";}
}
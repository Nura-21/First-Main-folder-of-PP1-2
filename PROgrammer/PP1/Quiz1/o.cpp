#include <iostream>
using namespace std;
 
int main() {
    int n1, n2;
    char op;
    cin>>n1;
    cin>>op;
    cin>>n2;
if (op=='+')
{
   cout<<n1<<" "<<op<<" "<<n2<<" = "<<n1+n2;
}
else if (op=='-')
{
   cout<<n1<<" "<<op<<" "<<n2<<" = "<<n1-n2;
}
else if (op=='*')
{
   cout<<n1<<" "<<op<<" "<<n2<<" = "<<n1*n2;
}
else if (op=='/')
{
  cout<<n1<<" "<<op<<" "<<n2<<" = "<<n1/n2;
}
}
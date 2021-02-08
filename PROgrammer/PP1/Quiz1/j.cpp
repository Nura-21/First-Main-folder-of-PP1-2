#include<iostream>
#include<cmath>
using namespace std;
int main ()
{
double t,p,y;
  int total = 0;
  cin>>t>>p>>y;
  while (t<y) {
    t *= (1 + p/100);
    t *= 100;
    t = (int) t;
    t /= 100;
    total++;
  }
  cout<<total;
  return 0;
}
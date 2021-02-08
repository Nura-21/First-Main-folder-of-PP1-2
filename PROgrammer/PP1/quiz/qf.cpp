//Turdalin Nurassyl задача Эф
#include <iostream>
#include <cmath>
using namespace std;
void ffact(int someint,int divisor) {
    while (someint % 2 == 0){
      cout<<divisor<<" ";
      someint = someint/divisor;
    }
   for (int i = 3; i <= sqrt(someint); i +=2){
      while (someint % i == 0){
         cout<<i<<" ";
         someint = someint/i;
      }
   }

   if (someint > 2)
   cout<<someint<<" ";
}
int main(/*Turdalin Nurassyl*/) {
   int en ;
   cin>>en;
   int divisor=2;
   ffact(en,divisor);
   return 0;
}
#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int x,y,i;
    cin>>x;
    int a[x];
    for(i=0;i < x;i++)
    {
        cin>> a[i];
    }
    cin>>y;
    int b[y];
  
    for(i =0;i < y;i++)
    {
        cin>>b[i];
    }
    int c[x+y];
    for (i = 0; i<x+y;i++){
        if (i<x)
        c[i]=a[i];
        else if(i>=x)
        c[i]=b[i-x];
    } 
    int k=x+y;
    sort(c,c+k);
    for (i = 0; i<x+y;i++){
        cout<<c[i]<<" ";
    }
    return 0;
}

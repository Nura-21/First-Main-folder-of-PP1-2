#include <iostream>
#include <climits>

using namespace std;

int main(){

    int n,m;
    cin >> n ;
    m=n;
    int a[2*n+1][2*m+1];
    
    for(int i = 0; i < 2*n+1; ++i){
        for(int j = 0; j < 2*m+1; ++j)
        {
            if(i==n && j==m)
            {
                a[i][j]=0;
            }
            else
            {
                a[i][j]=0;
            }
        }
    }

    for(int i=0;i<2*n+1;++i){
        for(int j=0; j<2*m+1; ++j)
        {   
            if(i==n-1 && j==m)
            {
                a[i][j]=1;
            }
            else if(i==n-1 && j==m-1)
            {
                a[i][j]=2;
            }
            else if(i==n && j==m-1)
            {
                a[i][j]=3;
            }
            else if(i==n+1 && j==m-1)
            {
                a[i][j]=4;
            }
            else if(i==n+1 && j==m)
            {
                a[i][j]=5;
            }
            else if(i==n+1 && j==m+1)
            {
                a[i][j]=6;
            }
            else if(i==n && j==m+1)
            {
                a[i][j]=7;
            }
            else if(i==n-1 && j==m+1)
            {
                a[i][j]=8;
            }
            else if(i==n-2 && j==m+1)
            {
                a[i][j]=9;
            }
            else if(i==n-2 && j==m)
            {
                a[i][j]=10;
            }
            else if(i==n-2 && j==m-1)
            {
                a[i][j]=11;
            }
            else if(i==n-2 && j==m-2)
            {
                a[i][j]=12;
            }
            else if(i==n-1 && j==m-2)
            {
                a[i][j]=13;
            }
            else if(i==n && j==m-2)
            {
                a[i][j]=14;
            }
            else if(i==n+1 && j==m-2)
            {
                a[i][j]=15;
            }
            else if(i==n+2 && j==m-2)
            {
                a[i][j]=16;
            }
            else if(i==n+2 && j==m-1)
            {
                a[i][j]=17;
            }
            else if(i==n+2 && j==m)
            {
                a[i][j]=18;
            }
            else if(i==n+2 && j==m+1)
            {
                a[i][j]=19;
            }
            else if(i==n+2 && j==m+2)
            {
                a[i][j]=20;
            }
            else if(i==n+1 && j==m+2)
            {
                a[i][j]=21;
            }
            else if(i==n && j==m+2)
            {
                a[i][j]=22;
            }
            else if(i==n-1 && j==m+2)
            {
                a[i][j]=23;
            }
            else if(i==n-2 && j==m+2)
            {
                a[i][j]=24;
            }
        }
    }

    for(int i=0;i<2*n+1;++i){
        for(int j=0; j<2*m+1; ++j)
        {
            cout<<a[i][j]<< " ";
        }
        cout<<endl;
    }
    
return 0;
}
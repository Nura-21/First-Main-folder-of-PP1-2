#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{   int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
         {
            if(arr[i]==arr[j])
            {
                while(j<n)
                {
                    arr[j]=arr[j+1];
                    j++;

                }
                --n;
            }
            else{
                continue;
            }

        }
        int arr[i];
        int n = sizeof(arr)/sizeof(arr[0]); 
    }
    
  
    sort(arr, arr+n); 
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }

    return 0;
}
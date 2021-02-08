# include <iostream>
using namespace std ;


void swap (int &x , int &y)
{
    int temp = x ;
    x = y ;
    y = temp ;
}

int main()
{
    float arr [10][10];
    int n=10;
    for(int i=0;i < n;++i){
        for(int j=0; j < n;++j){
            cin>>arr[i][j];
        }
    }
    int x ; 

    for (int k = 0; k < n; k++)
    {
        for (int m = 0; m < n; m++)
        {
            x = m+1;
            for (int i = k; i < n ; i++)
            {
                for (int j = x; j < n; j++)
                {
                    if (arr [k][m] > arr [i][j])
                        swap(arr [k][m] ,arr [i][j]);
                }
                x=0;
            } 
        }
    }
    cout<<endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << arr [i][j] << " | ";
        }
        cout<<endl;
    }
}
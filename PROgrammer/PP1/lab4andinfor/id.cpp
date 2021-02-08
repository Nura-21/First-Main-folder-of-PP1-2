#include <iostream>

using namespace std;

int main(){

    int n, m;
    cin >> n >> m;

    int a[n][m];

    for(int i = 0; i < n; ++i){
        for(int j = 0; j < m; ++j){
            cin >> a[i][j];
        }
    }
    int max=0;
    int ind = 0;
    int str=0;
    for(int i = 0; i < n; ++i){
        for(int j = 0; j < m; ++j){
            if(a[i][j]>max)
            {
                max=a[i][j];
                ind=i;
                str=j;
            } 
        }
    }
    

    cout<< max << endl<< ind << " " << str << endl;
    return 0;
}
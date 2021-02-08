#include <iostream>
using namespace std;
void read(int **a,int n)
{
    for(int i=0;i<n;++i){
        for(int j=0;j<n;++j){
            cin>>a[i][j];
        }
    }
}
void mp(int **a,int **b,int ** c,int n)
{
    for(int i=0;i<n;++i){
        for(int j=0;j<n;++j){
            c[i][j]=0;
            for(int k=0;k<n;++k){
                c[i][j]+=a[i][k]*b[k][j];
            }
        }
    }
}
void print(int ** a,int n)
{
    for(int i=0;i<n;++i){
        for(int j=0;j<n;++j){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
}
int main(){
    int n;
    cin>>n;
    //создаем матрицы так чтобы их можно было передать параметрам функций
    int ** a;
    int ** b;
    a = new int *[n];
    b = new int *[n];
    for(int i = 0; i<n; i++)
        a[i] = new int[n];
    for(int i = 0; i<n; i++)
        b[i] = new int[n];
    //матрица из ответов
    int ** c;
    c=new int*[n];
    for(int i=0;i<n;++i){
        c[i]=new int[n];
    }
    
    read(a,n);
    read(b,n);
    
    mp(a,b,c,n);
    print(c,n);
}

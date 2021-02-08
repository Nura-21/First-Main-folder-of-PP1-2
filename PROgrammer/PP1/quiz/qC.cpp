//Turdalin Nurassyl задача Си
#include <iostream>
using namespace std;
char a[15][15];
void reader(char ** a,int en){
    for(int i=0;i<en;++i){
        for(int j=0;j<en;++j){
            cin>>a[i][j];
        }
    }
}
int scanner1(int x,int y,int en,int cnt,int oper){
    if(oper>cnt){return cnt;}
    if(a[x][y]=='.' && x-1>0){oper++;cnt++;return scanner1(x-1,y,en,cnt,oper);}
    else{oper++;return scanner1(x+1,y-1,en,cnt,oper);}
}
int scanner2(int x,int y,int en,int cnt,int oper){
    if(oper>cnt){return cnt;}
    if(a[x][y]=='.' && x-1<=en){oper++;cnt++;return scanner1(x+1,y,en,cnt,oper);}
    else{oper++;return scanner1(x-1,y+1,en,cnt,oper);}
}
int main(/*Turdalin Nurassyl*/){
    int en;
    cin>>en;
    int x,y;
    cin>>x>>y;
    char ** table;
    table = new char*[en];
    for(int i=0;i<en;++i){
        table[i]=new char[en];
    }
    reader(table,en);
    int first=scanner1(y-1,x-1,en,0,0);
    /*int second=scanner2(y-1,x-1,en,first,0);
    cout<<second;*/
    cout<<first;
}
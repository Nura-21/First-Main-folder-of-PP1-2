#include <bits/stdc++.h>
using namespace std;
int main(){
    setlocale (LC_ALL, "RUS");
    cout<<"			Деление числа на разряды"<<endl;
    cout<<endl<<"Введите пятизначное число: ";
    string s;
    cin>>s;
    cout<<endl;
    for(int i=0;i<s.size();++i){
        cout<<i+1<<" цифра равна "<<s[i]<<endl;
    }
}
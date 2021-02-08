#include <bits\stdc++.h>
using namespace std;
int main(){
    int a[]={1,2,2,5,4,4,4};
    auto result = unique(begin(a),end(a));
    for(int i=0;i<*result;++i){
        cout<<a[i]<<" ";
    }
    //vector.erase(result,vector.end()); Удаляем ненужное
    //unique_copy(begin(v),end(v),back_inserter(v2); Копируем уникальные в новый элемент
    
}
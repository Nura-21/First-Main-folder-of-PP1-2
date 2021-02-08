#include <iostream>
#include <map>
using namespace std;
int main(){
    int en;
    cin>>en;
    map<string,int> all;
    for(int i=0;i<en;++i){
        string names;
        cin>>names;
        all[names]++;
    }
    int ki;
    cin>>ki;
    map<string,int> all2;
    for(int i=0;i<ki;++i){
        string stu;
        cin>>stu;
        all2[stu]++;
    }
    map<string,int>:: iterator it1;
    map<string,int>:: iterator it2;
    for(it1=all.begin();it1!=all.end();++it1){
        for(it2=all2.begin();it2!=all2.end();++it2){
            if(it1->first==it2->first){
                all[it1->first]++;
                all2[it2->first]++;
            }
        }
    }
    cout<<"Missed students:"<<endl;
    for(it1=all.begin();it1!=all.end();++it1){
        if(it1->second==1){
        cout<<"- "<<it1->first<<endl;}
    }
    cout<<"Not in the group:"<<endl;
    for(it2=all2.begin();it2!=all2.end();++it2){

        if(it2->second==1){
            cout<<"- "<<it2->first<<endl;
        }
    }
}
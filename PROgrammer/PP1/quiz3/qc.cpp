#include <iostream>
#include <vector>
using namespace std;
void calc(vector<pair<int,int>>& vec,vector<string> &  op,vector<pair<string,string>> & wr,int en){
    for(int i=0;i<en;++i){
        cout<<wr[i].first<<" "<<op[i]<<" "<<wr[i].second<<" = ";
        if(op[i]=="+"){cout<<vec[i].first+vec[i].second<<endl;}
        if(op[i]=="-"){cout<<vec[i].first-vec[i].second<<endl;}
        if(op[i]=="*"){cout<<vec[i].first*vec[i].second<<endl;}
        if(op[i]=="/"){cout<<vec[i].first/vec[i].second<<endl;}
    }
    }
int main(){
    int en;
    cin>>en;
    vector<pair<int,int>> vec;
    vector<string> op;
    vector<pair<string,string>> wr;
    for(int i=0;i<en;++i){
        string oper;
        cin>>oper;
        op.push_back(oper);
        string f,s;
        cin>>f;
        int x;
        cin>>x;
        cin>>s;
        int y;
        cin>>y;
        wr.push_back(make_pair(f,s));
        vec.push_back(make_pair(x,y));
    }
    /*for(int i=0;i<en;++i){
        cout<<wr[i].first<<" "<<op[i]<<" "<<wr[i].second<<" = ";
        if(op[i]=="+"){cout<<vec[i].first+vec[i].second<<endl;}
        if(op[i]=="-"){cout<<vec[i].first-vec[i].second<<endl;}
        if(op[i]=="*"){cout<<vec[i].first*vec[i].second<<endl;}
        if(op[i]=="/"){cout<<vec[i].first/vec[i].second<<endl;}
    }*/
    calc(vec,op,wr,en);
}

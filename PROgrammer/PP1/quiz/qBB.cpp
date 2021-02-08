//Turdalin Nurassyl задача Би
#include <iostream>
#include <map>
#include <vector>
#include <set>
using namespace std;
map<string, int> allnames;
vector<string> vec;
int main(/*Turdalin Nurassyl*/) {
    int en;
    cin >> en;
    for (int i = 0; i < en; i++) {
        string names;
        cin >> names;
        allnames[names]++;
        if (allnames[names] == 2) {vec.push_back(names);}
    }
    if(vec.size() != 0) 
    {
    for (int i = 0; i < vec.size(); i++) 
        {cout << vec[i] << endl;} 
    }
    else{cout<<"Understandable, have a great day"<<endl;}
}
#include <iostream> 
using namespace std;
char qg(string word, int i) 
{   int l=word.size();
    if(l==1){if(isupper(word[i])){return word[0];}
    else return 0;}
    if (l==i) {return 0;} 
    if (isupper(word[i])) {return word[i];} 
    return qg(word, i+1); 
} 
int main() 
{ 
    string word;
    cin>>word; 
    char ans = qg(word,0); 
    if (ans == 0) cout << "-1"; 
    else {cout << ans;}
}
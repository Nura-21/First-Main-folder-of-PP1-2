#include <iostream>
using namespace std;

bool isDigit(char ch){
	if(ch >= '0' && ch<='9') return true;
	else return false;
}

int countOfDigits(string s)
{
	int cnt = 0;
	for(int i=0;i<s.size();i++)
	{
		if(isDigit(s[i]) == true)
		{
			cnt++;
		}
	}
	return cnt;
}

int main(){
	int n;
    string s;
    cin>>s>>n;
    int stringHave = countOfDigits(s);
    if(stringHave < n) cout<<"NO";
    else cout<<"YES";


    
    return 0;
}
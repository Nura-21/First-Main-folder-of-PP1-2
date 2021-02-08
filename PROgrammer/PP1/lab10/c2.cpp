#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    stack<char> st;
    for(int i=0;i<s.size();i++)
    {
        st.push(s[i]);
        if(st.size()>=2)
        {
            char t1 = st.top();
            st.pop();
            char t2 = st.top();
            st.pop();
            if(t1 == '6' and t2 == '1') continue;
            else if(t1 == '5' and t2 == '2') continue;
            else if(t1 == '6' and t2 == '3') continue;
            else if(t1 == '9' and t2 == '4') continue;
            else if(t1 == '4' and t2 == '6') continue;
            else if(t1 == '1' and t2 == '8') continue;
            else 
            {
                st.push(t2);
                st.push(t1);
            }
        }
    }
        
    if(st.empty()) cout<<"Stack is empty";
    while(!st.empty())
    {
        cout<<st.top();
        st.pop();
    }
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
// Question if their is any extra (faltu) bracket like ((a+b)) gives-false; use count of element between pair of bracket;
// only contains () this brackett
bool checkRedundantBrackets(string &s)
{
	stack<char> st;
	int count=0;
	for(int i=0;i<s.length();i++)
	{
		if(s[i]==')')
		{
			count=0;
			while(st.top()!='(')
			{
				count++;
				st.pop();
			}
			if(count==0)
			{
				return true;
			}
			st.pop();
		}
		else
		{
			st.push(s[i]);
		}
	}
	return false;
}
int main()
{
	string s;
	cin>>s;
	if(checkRedundantBrackets(s))
	{
	    cout << "true" << endl;
    }
    else
	{
	    cout << "false" << endl;
    }
}

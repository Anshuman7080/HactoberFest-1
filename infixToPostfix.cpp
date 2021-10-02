#include<bits/stdc++.h>
using namespace std;
int prec(char s)
{
	if(s=='+' || s=='-')
	{
		return 1;
	}
	if(s=='*' || s=='/')
	{
		return 2;
	}
	if(s=='^')
	{
		return 3;
	}
	else
	{
		return -1;
	}
}
string infixToPostfix(string exp)
{
	stack<char> s;
	// We add explicity opening and closing bracket in expression to evaluate properly;
	exp.push_back(')');
	string ans;
	s.push('(');
	while(!s.empty())
	{
		for(int i=0;i<exp.length();i++)
		{
			//If there is operand then we simply push;
			if(exp[i]!='(' && exp[i]!=')' && exp[i]!='+' && exp[i]!='-' && exp[i]!='*' && exp[i]!='/' && exp[i]!='^' )
			{
				ans.push_back(exp[i]);
			}
			else if(exp[i]=='(')
			{
				s.push(exp[i]);
			}
			else if(exp[i]==')')
			{
				// pop out from stack and add it to ans string till opening braces found
				while(s.top() !='(')
				{
					ans.push_back(s.top());
					s.pop();
				}
				s.pop(); // removind opening brackes from stack;
			}
			else
			{
				// if their is an operator then pop out the the opertator which precidence is same or higher and add to ans
				while( prec(s.top()) >= prec(exp[i]) )
				{
					ans.push_back(s.top());
					s.pop();
				}
				s.push(exp[i]); // And push the current operator after popping operator of higher or equal precidendce;
			}
		}
	}
	return ans;
}
int main()
{
	string exp;
	cin>>exp;
	string ans=infixToPostfix(exp);
	cout<<ans<<endl;
}

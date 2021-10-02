#include<bits/stdc++.h>
using namespace std; 
void reverseStack(stack<int>& s1,stack<int>& s2) // pass by referenece;
{
	if(s1.size()==0)
	{
		return;
	}
	int data=s1.top();
	s1.pop();
	reverseStack(s1,s2); // reverse the last n-1 element now we have to put First element in last position
	// so we use second stack to copy that;
	while(!s1.empty())
	{
		int item=s1.top();
		s1.pop();
		s2.push(item);
	}
	s1.push(data);// pushes the first into last;
	//again copy back to s1 from s2;
	while(!s2.empty())
	{
		int item=s2.top();
		s2.pop();
		s1.push(item);
	}
}
int main()
{
	stack<int> s1, s2;
    int size;
    cin >> size;
    int val;
    for(int i = 0; i < size; i++)
	{
    	cin >> val;
    	s1.push(val);
    }
    reverseStack(s1, s2);
    while(!s1.empty()) 
	{
    	cout << s1.top() << " ";
    	s1.pop();
    }
    cout<<endl;
}

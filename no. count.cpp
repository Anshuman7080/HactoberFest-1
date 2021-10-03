#include<iostream>
using namespace std;
int main()
{
	int i,n,s=0;
	cout<<"enter the no.";
	cin>>n;
	
	while(n>0)
	{
	
	i=n%10;
	s=s+i;
	n=n/10;
}
	cout<<"the no. is  ="<<s;
	
	return 0;
}

#include<bits/stdc++.h>
using namespace std;
template<typename T>
class ArrayStack
{
	// Now we create dynamic ArrayStack so that when we fill it completely then we create a new double size arry;
	T* data; // to point the size of array created given by the user at time of constructor;
	int nextIndex; // position at which next element should appear if next index is 0 then stack is empty;
	int capacity; // as index and capacity are always int
	
	public:
		ArrayStack()
		{
			data=new T[4]; // we can also use this also;
			nextIndex=0;
			capacity=4; // lets say initially we go with capacity 4 if it filled then we create a new double size array;
		}
		
		int size() // gives the size of stack so we can easily give by the value of nextIndex;
		{
			return this->nextIndex;
		}
		
		bool isEmpty()
		{
			/*
			if(nextIndex==0)
			{
				return true;
			}
			else
			{
				return false;
			}*/
			return nextIndex==0; // short form of which we wrote previously;
		}
		
		void push(T element)
		{
			if(nextIndex==capacity) // then we have to create a double sized array
			{
				T* newData=new T[2*capacity];
				for(int i=0;i<capacity;i++)
				{
					newData[i]=data[i]; // creating a newData array and copy the element from previous array;
				}
				capacity=2*capacity;
				delete [] data; // deleting previous array
				data=newData; // Now data is pointing to newData now;
				/*
				cout<<"Stack is Full"<<endl;
				return;
				*/
			}
			data[nextIndex]=element;
			nextIndex+=1;
		}
		
		T pop()
		{
			if(nextIndex==0) // we can also use isEmpty which we made earlier;
			{
				cout<<"Empty Stack"<<endl;
				return INT_MIN; // Better to return 0 if somebody gives data type other than int 
			}
			nextIndex--;
			return data[nextIndex]; 
		}
		
		T top()
		{
			if (isEmpty())
			{
				cout<<"Empty Stack"<<endl;
				return INT_MIN;
			}
			return data[nextIndex-1];
		}
};
int main()
{
	ArrayStack<int> s;
	s.push(10);
	s.push(20);
	s.push(30);
	s.push(40);
	s.push(50);
	cout<<s.top()<<endl;
	cout<<s.pop()<<endl;
	cout<<s.size()<<endl;
	cout<<s.pop()<<endl;
	cout<<!s.isEmpty()<<endl;
}

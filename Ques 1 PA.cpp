#include<iostream>
using namespace std;
class node{
	public:
		int data;
		node *next;
		node()
		{
			data=NULL;
			next=NULL;
		}
		node(int a)
		{
			data=a;
			next=NULL;
		}
		node(int a,node *x)
		{
			data=a;
			next=x;
		}
};
class stack{
	public:
		node *top,*tail;
		stack()
		{
			top=NULL;
			tail=NULL;
		}
		bool isEmpty()
		{
			if (top==NULL)
			return true;
			else
			return false;
		}
		int push(int a)
		{
			if(this->isEmpty()==true)
			{
				top=new node(a,NULL);
				tail=top;
			}
			else
			{
				top=new node(a,top);
			}
		}
		int pop()
		{
			if(this->isEmpty()==true)
			{
				cout<<"Stack Underflow";
			}
			else
			{
				node *n=top;
				top=top->next;
				delete n;
			}
		}
		int peek()
		{
			if(this->isEmpty()==true)
			{
				cout<<"Stack Underflow";
				return -1;
			}
			else
			{
				return top->data;
			}
		}}
;
int main()
{
	stack s;
	string str="HelleH";
	int size,size1,flag=0;
	if(str.size()%2==0)//Even
	{
		size=(str.size()-1)/2;
		
		for(int i=0;i<=size;i++)
		{
			s.push(str[i]);
		}
		for(int j=size+1 ; j<str.size() || !s.isEmpty() ; j++)
		{
			char c=s.peek();
			if(c!=str[j])
			{
				flag=1;
				break;
			}
			else
			s.pop();
		}
	}
	else
	{
		size=(str.size()/2);
		for(int i=0;i<size;i++)
		{
			s.push(str[i]);
		}
		for(int j=size+1;j<str.size() || !s.isEmpty();j++)
		{
			if(s.peek()!=str[j])
			{
				flag=1;
				break;
			}
			else
			s.pop();
		}
	}
	if(flag==1)
	{
		cout<<"Not palindrome";
	}
	else
		cout<<"Palindrome";
}

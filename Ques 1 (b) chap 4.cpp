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
		}
};
class queue{
	public:
		node *front,*rear;
		queue()
		{
			front=NULL;
			rear=NULL;
		}
		bool isEmpty()
		{
			if (front==NULL)
			return true;
			else
			return false;
		}
		void push(int a)
		{
			if(this->isEmpty()==true)
			{
				rear=new node(a,NULL);
				front=rear;
			}
			else
			{
				rear->next=new node(a,NULL);
				rear=rear->next;
			}
		}
		void pop()
		{
			if(front==NULL)
			{
				rear=front;
			}
			else
			{
				node *n=front;
				front=front->next;
				delete n;
				
			}
		}
		int peek()
		{
			if(isEmpty()==true)
			{
				cout<<"Queue Underflow";
				return -1;
			}
			else
			{
				return front->data;
			}
		}
};
int main()
{
	stack s;
	int element,size;
	cout<<"Enter size of stack:";
	cin>>size;
	cout<<"Enter elements of stack:";
	for(int i=0;i<size;i++)
	{
		cin>>element;
		s.push(element);
	}
	queue q;
	while(!s.isEmpty())
	{
		q.push(s.peek());
		s.pop();
	}
	while(q.isEmpty()!=true)
	{
		s.push(q.peek());
		q.pop();
	}
	cout<<"Stack after is :";
	while(!s.isEmpty())
	{
		cout<<s.peek()<<" ";
		s.pop();
	}
}

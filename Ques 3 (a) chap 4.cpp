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
void reverseStack()
		{
	stack stack1,stack2;
 	int element,variable;
	int size;
	cout<<"Enter size of stack:";
	cin>>size;
	cout<<"Enter element of first stack:";
	for(int i=1;i<=size;i++)
	{
		cin>>element;
		stack1.push(element);
	}
             				while(!stack1.isEmpty())
				{
					stack2.push(stack1.peek());
					stack1.pop();
				}
				
			while(!stack2.isEmpty())
			{
          stack1.push(stack2.peek());
		stack2.pop();
                	}
	cout<<"\nStack1 after:\n"<<endl;
	while(!stack1.isEmpty())
	{
		cout<<stack1.peek()<<endl;
		stack1.pop();
	}
		}	
};
int main()
{
	stack s1;
	s1.reverseStack();
}

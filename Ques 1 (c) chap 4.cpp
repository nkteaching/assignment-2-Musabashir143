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
            stack s;
            int size,element;
			static int count=0;
			cout<<"Enter size of stack";
			cin>>size;
			 for(int i=0 ; i<size ;i++)
        {
             cin>>element;
             s.push(element);
        }
			if(count==size)
			{
				return;
			}
			else
			{
			int t=s.peek();
			s.pop();
			int i=0;
			while(i<size-1)
			{
			    push(s.peek());
			    s.pop();
			    i++;
			}
			s.push(t);
			while(!isEmpty())
			{
				s.push(peek());
				pop();
			}
			size--;
		    }
		}
}
;
int main()
{
	stack s1;
	s1.reverseStack();
}

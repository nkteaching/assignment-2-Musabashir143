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
void sort() 
{ 
    stack s1;
    stack s2; 
   int element;
	int size;
	cout<<"Enter size of stack:";
	cin>>size;
	cout<<"Enter element of first stack:";
	for(int i=1;i<=size;i++)
	{
		cin>>element;
		s1.push(element);
	}
    while (!isEmpty()) 
    {
        int temp = s1.peek(); 
        s1.pop(); 
  
       
        while (!s2.isEmpty() && s2.peek() > temp) 
        { 
            
            s1.push(s2.peek()); 
            s2.pop(); 
        } 
  
       
        s2.push(temp); 
    }
}};
int main()
{
	stack s1;
	s1.sort();
}

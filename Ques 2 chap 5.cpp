#include<iostream>
using namespace std;
struct node
{
	int data;
	node *next;	
};
class list
{
		private:
		node *head, *tail;
		public:
		list()
		{
			head=NULL;
			tail=NULL;
		}
		void create(int value)
		{
			node *temp=new node;
			temp->data=value;
			temp->next=NULL;
			if(head==NULL)
			{
				head=temp;
				tail=temp;
				temp=NULL;
			}
			else
			{	
				tail->next=temp;
				tail=temp;
			}
		}
		node* gethead()
    	{
        	return head;
    	}

    
    	int count(node *head)
    	{
    		static int count1=0;
        	if(head == NULL)
        	{
            	return count1;
        	}
        	else
       		{
            	
            	count1++;
            	count(head->next);
        	}
    	}
		
};
int main()
{
	list o;
	o.create(25);
	o.create(50);
	o.create(90);
	o.create(40);
	cout<<o.count(o.gethead());
	
	return 0;
}

#include <stdio.h>
#include <stdlib.h>
struct node
{
	int data;
	struct node*link;
};
struct node*head=NULL,*tail=NULL,*prev,*next,*cur,*p1,*p2,*t;
void create()
{
	int n;
	printf("enter number of nodes:\n");
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		cur=(struct node*)malloc(sizeof(struct node));
		printf("enter current node data:");
		scanf("%d",&(cur->data));
		cur->link = NULL;
		if(head==NULL)
			head=tail=cur;
		else
		{
			tail->link=cur;
			tail=cur;
		}
	}
}
void insert_at_begin()
{
	cur=(struct node*)malloc(sizeof(struct node));
	printf("Enter data");
	scanf("%d",&(cur->data));
	cur->link=head;
	head=cur;
}
void insert_at_end()
{
	cur=(struct node*)malloc(sizeof(struct node));
	printf("Enter data");
	scanf("%d",&(cur->data));
	cur->link=NULL;
	tail->link=cur;
	tail=cur;
}
void insert_at_pos()
{
	int c=1,pos;
	cur=(struct node*)malloc(sizeof(struct node));
	printf("enter data:");
	scanf("%d",&(cur->data));
	printf("enter position where data to be stored:");
	scanf("%d",&pos);
	next=head;
	while(c<pos)
	{
		prev=next;
		next=next->link;
		c++;
	}
	prev->link=cur;
	cur->link=next;
}
void insert_before()
{
	int value;
	cur=(struct node*)malloc(sizeof(struct node));
	printf("Enter data:");
	scanf("%d",&(cur->data));
	printf("Enter data before:");
	scanf("%d",&value);
	next=head;
	while(next->data!=value && next!=NULL)
	{
		prev=next;
		next=next->link;
	}
	prev->link=cur;
	cur->link=next;
}
void insert_after()
{
	int value;
	cur=(struct node*)malloc(sizeof(struct node));
	printf("enter new node data: \n");
	scanf("%d",&(cur->data));
	printf("Enter data after");
	scanf("%d",&value);
	next=head;
	while(next->data!=value && next!=NULL)
		next=next->link;
	cur->link=next->link;
	next->link=cur;
}

void delete_at_begin()		
{
	cur=head;
	head=cur->link;
	cur->link=NULL;
	printf("Deleted element is %d\n",cur->data);
	free(cur);
}
void delete_at_end()
{
	cur=head;
	while(cur->link!=tail)
		cur=cur->link;
	cur->link=NULL;
	next=tail;
	printf("Deleted element is %d\n",next->data);
	free(next);
	tail=cur;
}
void delete_at_pos()
{
	int pos , c=1;
	printf("Enter position of the data to be deleted :      \n");
	scanf("%d",&pos);
	next = head;
	while(c<pos)
	{
		prev = next;
		next = next -> link;
		c++;
	}
	prev -> link = next -> link;
	printf("Deleted Element = %d  \n",next -> data);
	next -> link = NULL;
	free(next);
}
void delete_before()
{
	int value;
	printf("enter node before which num need to be deleted:");
	scanf("%d",&value);
	next=head;
	while(next->link->data!=value)
	{
		prev=next;
		next=next->link;
	}
	prev->link=next->link;
	next->link=NULL;
	printf("deleted element is %d\n",next->data);
	free(next);
}
void delete_after()
{
	int value;
	printf("enter node after which num need to be deleted:");
	scanf("%d",&value);
	next=head;
	while(next->data!=value)
	{
		prev=next;
		next=next->link;
	}
	prev=next->link;
	next->link=prev->link;
	printf("deleted data is %d\n",prev->data);
	prev->link=NULL;
	free(prev);
}
void traversal()
{
	if(head==NULL)
		printf("List is empty\n");
	else
	{
		next=head;
		while(next!=NULL)
		{
			printf("%d->",next->data);
			next=next->link;
		}
		printf("NULL\n");
	}
}
void reverse()
{
	int a[100];
	int i = 0;
	cur = head;
	while( cur != NULL)
	{
		a[i] = cur -> data;
		cur = cur -> link;
		i += 1;
	}
	i -= 1;
	printf("NULL ");
	while(i >= 0)
	{
		printf("<- %d ",a[i]);
		i--;
	}
}
void search()
{
	int value,flag=0,c=0;
	printf("enter value to be searched:");
	scanf("%d",&value);
	next=head;
	while(next!=NULL)
	{
		if(next->data==value)
		{
			flag=1;
			break;
		}
		next=next->link;
		c++;
	}
	if(flag==1)
		printf("element present in list at %d position\n",c);
	else
		printf("element not present in list\n");
}
void bubblesort()
{
	struct node *p1 , *p2;
	int c=0 ,t;
	p1 = head;
	while(p1 != NULL)
	{
		c++;
		p1 = p1 -> link;
	}
	for(int i = 0;i<c;i++)
	{
		p2 = head;
		while(p2 -> link != NULL)
		{
			if(p2 -> data > p2 -> link -> data)
			{
				t = p2 -> data;
				p2 -> data = p2 -> link ->data;
				p2 -> link -> data = t;
			}
			p2 = p2 -> link;
		}
	}
}
void sorting()
{
	struct node *p1 , *p2,*last = NULL;
	int c,t;
	do
	{
		c=0;
		p1 = head;
		while(p1 -> link != last)
		{
			if(p1 -> data > p1->link->data)
			{
				t = p1 ->data;
				p1 -> data = p1 -> link ->data;
				p1 -> link -> data = t;	
				c = 1;			
			}
		p1 = p1-> link;	
		}
		last = p1;
	}while(c);
}


int main()
{
	int ch;
	while(1)
	{
	printf("\nprogram for single linked list\n");
	printf("1-create\n2-insert at begin\n3-insert at position\n4-insert at end\n5-insert before");
	printf("\n6-insert after\n7-delete at begin\n8-delete at end\n9-delete at pos\n10-delete before\n");
	printf("11-delete after\n12-traversal \n13-display in reverse\n14-search\n15-bubble sort\n16-sorting\n17-EXIT\n");
	printf("enter your choice\n");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1: create();
			break;
		case 2: insert_at_begin();
			break;
		case 3: insert_at_pos();
			break;
		case 4: insert_at_end();
			break;
		case 5: insert_before();
			break;
		case 6: insert_after();
			break;
		case 7: delete_at_begin();
			break;
		case 8: delete_at_end();
			break;
		case 9: delete_at_pos();
			break;
		case 10: delete_before();
			 break;
		case 11: delete_after();
			 break;
		case 12: traversal();
			 break;
		case 13: reverse();
			 break;
		case 14: search();
			 break;
		case 15: bubblesort();
				traversal();
			 break; 
		case 16: sorting();
				traversal();
			 break;
		case 17: exit(0);
	}
	}
}
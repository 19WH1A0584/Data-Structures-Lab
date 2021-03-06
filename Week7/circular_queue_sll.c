//circular queue using linked list
#include <stdio.h>
#include <stdlib.h>
struct node
{
	int data;
	struct node*link;
};
struct node*f=NULL,*r=NULL,*cur;
void enqueue()
{
	cur=(struct node*)malloc(sizeof(struct node));
	printf("enter data to insert:");
	scanf("%d",&cur->data);
	if(f==NULL)
	{
		cur->link=cur;
		f=r=cur;
	}
	else
	{
		r->link=cur;
		cur->link=f;
		r=cur;
	}
}
void dequeue()
{
	if(f==NULL)
	printf("Circular Queue underflow\n");
	else if(f==r)
	{
		printf("deleted data: %d\n",f->data);
		f=r=NULL;
	}
	else
	{
		cur=f;
		f=f->link;
		r->link=f;
		printf("deleted data: %d\n",cur->data);
		free(cur);
	}
}
void display()
{
	if(f==NULL)
	printf("Circular Queue is empty\n");
	else
	{
		cur=f;
		while(cur->link!=f)
		{
			printf("%d->",cur->data);
			cur=cur->link;
		}
		printf("%d->",cur->data);
	}
}

int main()
{
	int ch;
	while(1)
	{
		printf("\nPROGRAM FOR CIRCULAR QUEUE SLL:\n");
		printf("1.Enqueue\n2.Dequeue\n3.Display\n4.Exit\n");
		printf("Enter your choice:");
		scanf("%d",&ch);
		switch(ch)
		{
		case 1: enqueue();
			break;
		case 2: dequeue();
			break;
		case 3: display();
			break;
		case 4: exit(0);
		}
	}
}
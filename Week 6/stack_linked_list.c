//stack implementation using single linked list
#include <stdio.h>
#include <stdlib.h> 

struct node
{
    	int data;
    	struct node *link;
	
}*top=NULL,*temp;

/* Push data into stack */
void push()
{
		temp = (struct node*)malloc(sizeof(struct node));
    		printf("enter data item:");
		scanf("%d",&temp->data);
		temp->link=top;
		top=temp;
}

/* Display stack elements */
void display()
{
    	temp = top;
    	if (top == NULL)
        	printf("Stack underflow\n");
	else
	{
		printf("Stack elements:\n");
    		while (temp != NULL)
    		{
        		printf("%d",temp->data);
        		printf("\n");
        		temp = temp->link;
		}
    	}
 }
 
/* Pop Operation on stack */
int pop()
{
	if (top == NULL)
        	printf("\nempty stack\n");
    	else
	{
        	temp = top;
    		printf("Popped value : %d\n", temp->data);
		top = top->link;
    		free(temp);
	}
}
 
/* Return top element */
int peek()
{
    return top->data;
}
 
int main()
{
    int ch,x;
	while(1)
	{
		printf("Enter your choice:");
		printf("\n 1 - Push");
    		printf("\n 2 - Pop");
    		printf("\n 3 - Peek");
    		printf("\n 4 - Display");
    		printf("\n 5 - Exit\n");
		scanf("%d",&ch);
		switch(ch)
		{

		    case 1: push(x);
			        break;
		    case 2: pop();
			        break;
			case 3: printf("Top most element of stack is :%d\n",peek());
			    	break;
			case 4: display();
			    	break;
			case 5: exit(0);
		}
	}
}


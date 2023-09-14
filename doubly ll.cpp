#include<stdio.h>
#include<stdlib.h>
struct node{
		int data;
		struct node*prev;
		struct node*next;
	};
	
struct node*head,*newnode,*temp;

void create();
void display();

int main()
{
	create();
	display();
	return 0;
	
}
void create()
{
	head=0;
	int choice=1;
	while(choice)
	{
		newnode=(struct node*)malloc((sizeof(struct node)));
		printf("enter data:");
		scanf("%d",&newnode->data);
		newnode->next=0;
		newnode->prev=0;
		if(head==0)
		{
			head=temp=newnode;
		}
		else{
			temp->next=newnode;
			newnode->prev=temp;
			temp=newnode;
			
		}
		printf("\ndo you want to enter data:");
		scanf("%d",&choice);
		
	}
}
void display()
{
	temp=head;
	while(temp!=0)
	{
		printf("%d",temp->data);
		temp=temp->next;
	}
	printf("\n");
}

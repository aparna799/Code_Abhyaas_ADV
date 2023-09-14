#include<stdio.h>
#include<stdlib.h>
int main()
{
	struct node{
		int data;
		struct node* next;
	};
	struct node* head,*temp,*newnode;
	int choice=1;
	head=0;
	while(choice)
	{
		newnode=(struct node*)malloc(sizeof(struct node));
		printf("enter data");
		scanf("%d",&newnode->data);
		newnode->next=0;
		if(head==0)
		{
			head=temp=newnode;
		}
		else{
			temp->next=newnode;
			temp=newnode;
		}
		printf("do you want to continue:");
		scanf("%d",&choice);
	}
	printf("\nbefore reversing linked list:");
	temp=head;
	while(temp!=0)
	{
		printf("%d",temp->data);
		temp=temp->next;
	}

	struct node*prevnode,*currentnode,*nextnode;
	prevnode=0;
	currentnode=nextnode=head;
	while(nextnode!=0)
	{
		nextnode=nextnode->next;
		currentnode->next=prevnode;
		prevnode=currentnode;
		currentnode=nextnode;
	}
	head=prevnode;
	printf("\nafter reversing a linked list:");
	temp=head;
	while(temp!=0)
	{
		printf("%d",temp->data);
		temp=temp->next;
	}
}

#include<stdio.h>
#include<stdlib.h>
int main()
{
	struct node{
		int data;
		struct node* next;
	};
	
	struct node* head,*nd,*temp;
	head=0;
	int choice=1;
	
	while(choice)
	{
		nd=(struct node*)malloc(sizeof(struct node));
		printf("enter the data");
		scanf("%d",&nd->data);
		nd->next=0;
		if(head==0)
		{
			head=temp=nd;
		}
		else{
			temp->next=nd;
			temp=nd;
		}
		printf("do you want to enter another element:");
		scanf("%d",&choice);
	
    }
    
    // head=head->next;			Deletion at the begining
    //delete at end
   /* temp=head;
    struct node*prevnode;
    while(temp->next!=0)
    {
    	prevnode=temp;
    	temp=temp->next;
    	
	}
	if(temp==head)
	{
		head=0;
		free(temp);
	}
	else
	{
	prevnode->next=0;
	}*/
	
	//Delete at middile
	
	temp=head;
	int pos;
	printf("enter the pos:");
	scanf("%d",&pos);
    struct node*nextnode;
    int i=1;
    while(i<pos-1)
    {
    	temp=temp->next;
    	i++;
    	
	}
	nextnode=temp->next;
	temp->next=nextnode->next;
		
	
		
		/*if(temp==head)
		{
			head=0;
			free(temp);
		}
		else
		{
			prevnode->next=temp->next;
		}*/
	
	
	
	
    temp=head;
    while(temp!=0)
    {
    	printf("%d",temp->data);
    	temp=temp->next;
	}
}

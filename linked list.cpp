#include<stdio.h>
#include<stdlib.h>

int main() {
    struct node {
        int data;
        struct node* next;
    };
    
    struct node* head, * temp, * newnode;
    head = 0;
    int choice = 1,count=0,i,pos; // Initialize "choice" to 1

    while (choice) {
        newnode = (struct node*)malloc(sizeof(struct node));
        printf("enter data:");
        scanf("%d", &newnode->data);
        newnode->next = 0;
        if (head == 0) {
            head = temp = newnode;
        }
        else {
            temp->next = newnode;
            temp = newnode;
        }
        printf("do you want to continue:");
        scanf("%d", &choice);
    }
    
    //insertion at the begining
    /*struct node* newnode1 = (struct node*)malloc(sizeof(struct node));
	printf("enter data that u want to insert:");
    scanf("%d",&newnode1->data);
    newnode1->next=head;
    head=newnode1;*/
    
    
    //insertion at the end
    /*struct node* newnode1 = (struct node*)malloc(sizeof(struct node));
    printf("enter data that u want to insert:");
    scanf("%d",&newnode1->data);
    newnode1->next=0;
    temp=head;
    while(temp->next!=0)
    {
    	temp=temp->next;
	}
    temp->next=newnode1;*/
    
    temp = head;
    while (temp != 0) {
        printf("%d ", temp->data); // Add a space after %d
        temp = temp->next;
        count++;
    }
    printf("count%d",count);

    
    //insertion at the middle
    printf("enter the position:");
    scanf("%d",&pos);
    if(pos>count)
    {
    	printf("invalid position");
	}
	else
	{
		temp=head;
		while(i<pos)
		{
			temp=temp->next;
			i++;
		}
	
    	struct node* newnode1 = (struct node*)malloc(sizeof(struct node));
    	printf("enter data that u want to insert:");
    	scanf("%d",&newnode1->data);
    	newnode1->next=0;
    	newnode1->next=temp->next;
    	temp->next=newnode1;
	}
   

    temp = head;
    while (temp != 0) {
        printf("%d ", temp->data); // Add a space after %d
        temp = temp->next;
        count++;
    }
    printf("count%d",count);

    
    return 0; // Add a return statement to indicate successful program execution

}


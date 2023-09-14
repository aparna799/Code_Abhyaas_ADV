#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *prev;
    struct node *next;
};

struct node *head, *newnode, *temp;

void create();
void display();
void insertbeg();

int main() {
    create();
    display();
    insertbeg();
    display();
    
    return 0;
}

void create() {
    head = NULL;
    int choice = 1;
    
    while (choice) {
        newnode = (struct node *)malloc(sizeof(struct node));
        
        printf("Enter data: ");
        scanf("%d", &newnode->data);
        
        newnode->next = NULL;
        newnode->prev = NULL;
        
        if (head == NULL) {
            head = temp = newnode;
        } else {
            temp->next = newnode;
            newnode->prev = temp;
            temp = newnode;
        }
        
        printf("\nDo you want to enter data (0/1): ");
        scanf("%d", &choice);
    }
}

void display() {
    struct node *temp = head;
    
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
}
void insertbeg()
{
	temp=head;
	struct node*newnode1=(struct node*)malloc(sizeof(struct node));
	printf("enter data:");
	scanf("%d",&newnode1->data);
	newnode1->next=0;
	newnode1->prev=0;
	if(head==0)
	{
		head=temp=newnode1;
	}
	else
	{
		temp->next=newnode1;
		newnode1->prev=temp;
		temp=newnode1;
	}
	
}

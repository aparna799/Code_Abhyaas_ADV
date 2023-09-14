#include<stdio.h>  
#include<stdlib.h>  
void create(int);  
void beginning_delete();  
void display();
struct node  
{  
    int data;  
    struct node *next;  
    struct node *prev;  
};  
struct node *head;  
int main ()  
{  
    int choice,item;  
    do   
    {  
        printf("1.Append List\n2.Delete node from beginning\n3.display\n4.Exit\n5.Enter your choice?");  
        scanf("%d",&choice);  
        switch(choice)  
        {  
            case 1:  
            printf("\nEnter the item\n");  
            scanf("%d",&item);  
            create(item);  
            break;   
            case 2:  
            beginning_delete();  
            break;   
            case 3:  
            display();  
            break;
			case 4:
			exit(0);
			break;    
            default:  
            printf("\nPlease enter valid choice\n");  
        }  
                  
    }while(choice != 4);  
}  
void create(int item)  
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
     
}  
void beginning_delete()  
{  
    struct node *ptr;  
    if(head == NULL)  
    {  
        printf("\n UNDERFLOW\n");  
    }  
    else if(head->next == NULL)  
    {  
        head = NULL;   
        free(head);  
        printf("\nNode Deleted\n");  
    }  
    else  
    {  
        ptr = head;  
        head = head -> next;  
        head -> prev = NULL;  
        free(ptr);  
        printf("\nNode Deleted\n");  
    }  
}  
void display()
{
	struct node *ptr = (struct node *)malloc(sizeof(struct node));  
	ptr=head;
	while(ptr!=0)
	{
		printf("%d",ptr->data);
		ptr=ptr->next;
	}
	printf("\n");
}

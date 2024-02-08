#include<stdio.h>
#include<stdlib.h>
struct node {
    struct node *prev;
    int data;
    struct node *next;
};
struct node *add_at_beginning(struct node *head,int data)
{
    struct node *temp = malloc(sizeof(struct node));
    temp->prev=NULL;
    temp->data=data;
    temp->next=head;

    head->prev=temp;
    head = temp;

    return head;
}

void print(struct node *head)
{
    struct node *temp = head;
    while(temp!=NULL)
    {
        printf("%d",temp->data);
        temp=temp->next;
    }
}

int main()
{
    int data,choice;
    struct node *head = malloc(sizeof(struct node));
    head->prev=NULL;
    head->data=1;
    head->next=NULL;
    while(choice!=0)
    {
        printf("\nEnter your choice:\n");
        printf("1 to insert a node at begining\n");
        printf("2 to insert a node at the end\n");
        printf("3 to insert a node at the your desired position\n");
        printf("4 to delete the first Node\n");
        printf("5 to delete the last Node\n");
        printf("6 to delete a node at the your desired position\n");
        scanf("%d",&choice);
        if (choice == 1)
        {
            printf("Enter data to be inserted\n");
            scanf("%d", &data);
            head=add_at_beginning(head, data);
        } 
    }  

}

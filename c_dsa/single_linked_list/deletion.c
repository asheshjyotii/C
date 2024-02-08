#include<stdio.h>
#include<stdlib.h>
struct node {
    int data;
    struct node *link;
};


struct node *delete_first(struct node *head)
{
    struct node *pointer = head;
    head = pointer->link;
    free(pointer);
    pointer = NULL;
    return head;
}
struct node *delete_end(struct node *head)
{
    struct node *pointer = head;
    struct node *temp ;
    while(pointer->link != NULL)
    {
        temp = pointer;
        pointer=pointer->link;
    }
    temp->link = NULL;
    free(pointer);
    
    return head;
}
// struct node *delete_pos(struct node *head, int pos)
// {
//     int i;
//     struct node *pointer = head;
//     struct node *temp = NULL ;
//     for(i=0;i<pos-1;i++)
//     {
//         temp = pointer;
//         pointer=pointer->link;
//     }
//     temp->link = pointer->link;
//     free(pointer);
    
//     return head;
// }

struct node *delete_pos(struct node *head, int pos)
{
    int i;
    struct node *pointer = head;
    struct node *temp = NULL ;
    for(i=0;i<pos-1;i++)
    {
        temp = pointer;
        pointer=pointer->link;
    }
    struct node *next = pointer->link;
    temp->link = next;
    free(pointer);
    
    return head;
}
struct node *insert_first(struct node *head, int data)
{
    struct node *pointer = (struct node *)malloc(sizeof(struct node));
    pointer->data=data;
    pointer->link = head;
    head = pointer;
    return head;
    
}

struct node *insert_end(struct node *head, int data)
{
    struct node *insert, *pointer;
    insert = (struct node *)malloc(sizeof(struct node));
    insert->data=data;
    insert->link = NULL;
    pointer = head;
    while(pointer->link != NULL)
    {
        pointer = pointer->link;
    }
    
    pointer->link = insert;
    return head;
}

struct node *insert_pos(struct node *head, int pos,int data)


{
    int n;
    struct node *pointer, *insert;
    pointer = head;
    for (n=0;n<pos-1;n++)
    {
        pointer=pointer->link;
    }
    insert=(struct node *)malloc(sizeof(struct node));
    insert->data=data;
    insert->link = pointer->link;
    pointer->link=insert;
    return head;
}

void print(struct node *head)
{
    if(head==NULL)
        printf("The list is empty\n");
    struct node *pointer = head;
    while(pointer != NULL)
    {
        printf("%d ", pointer->data);
        pointer=pointer->link;
    }
}
int main()
{
    int choice, data,pos;
    //creating the head
    struct node *head = NULL;
    head = (struct node *)malloc(sizeof(struct node));
    head->data=1;
    head->link=NULL;
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
        head=insert_first(head, data);
    }    
    else if (choice == 2)
    {
        printf("Enter data to be inserted\n");
        scanf("%d", &data);
        head=insert_end(head, data);
    }
    else if (choice == 3)
    {
        printf("\n\nEnter data and position to be inserted\n");
        scanf("%d %d", &data,&pos);
        head=insert_pos(head, pos, data);
    }
    else if (choice == 4)
    {
        head=delete_first(head);
    }
    else if (choice == 5)
    {
        head=delete_end(head);
    }
    else if (choice == 6)
    {
        printf("\n\nEnter position to be deleted\n");
        scanf("%d",&pos);
        head=delete_pos(head,pos);
    }
    print(head);
    }
    
}
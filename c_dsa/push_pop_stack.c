#include<stdio.h>
#define SIZE 100
int stack[SIZE];
int choice,data;
int top = -1,temp;
void push()
{
    if(top>=SIZE)
    {
        printf("Stack overflow\n");
        return;
    }
    top++;
    stack[top]=data;
    printf("Data added to the Stack\n");
}

int pop()
{
    if(top<=0)
    {
        
        return -5;
    }
    temp = top;
    top--;
    return stack[temp];
    
    
}

int main()
{
 
    
    while(1)
    {
        printf("---------------------\n");
        printf("Enter your choice:\n");
        printf("---------------------\n");
        printf("1.Push element\n");
        printf("2.Pop element\n");
        printf("3.Size of stack\n");
        printf("4.Exit from stack\n");
        printf("---------------------\n");
        
        scanf("%d",&choice);
        
        switch(choice)
        {
            case 1:
                printf("Enter the data to insert\n");
                scanf("%d",&data);
                push(data);
                break;
            case 2:
                data=pop();
                if(data==-5)
                {
                    printf("The stack is empty\n");
                    break;
                }
                printf("data popped--> %d \n",data);
                break;
            case 3:
                printf("Size of stack: %d\n",top+1);
                break;
            case 4:
                exit(0);
                break;
                
        }
        
    }
    
    
    
}
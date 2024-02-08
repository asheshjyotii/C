#include<stdio.h>
#include<ctype.h>
#define MAX 100
char stack[MAX];
int top = -1;

void push(char e)
{
    stack[++top]=e ;
}
int pop()
{
    if(top==-1)
        return -1;
    else
        return stack[top--];
}
int priority(char e)
{
    if(e == '(')
        return 0;
    else if (e == '+' || e == '-')
        return 1;
    else if (e == '*' || e == '/')
        return 2;
    else
    printf("Invalid expresion\n");
}
int main()
{
    char exp[20];
    char *e,x;
    
    printf("Enter the Expession:\n");
    scanf("%s",&exp);
    
    e=exp;
    
    
    while(*e != '\0')
    {
        if(isalnum(*e))
            printf("%c",*e);
        else if(*e == '(')
            push(*e);
        else if(*e ==')')
        {
            while((x=pop())!='(')
            {
                printf("%c",x);                
            }
        }
        else 
        {
            while(priority(stack[top])>=priority(*e))
            {
                printf("%c",pop());
            }
            push(*e);
        }
        e++;

    }
    while(top = -1)
    {
        printf("%c",pop());
    }
}
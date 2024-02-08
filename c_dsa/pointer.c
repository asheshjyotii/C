#include<stdio.h>
#include<string.h>
int main()
{
    int a = 12;
    // int *b = &a; 
    printf("%p",(void*)&a);
    return 0;
}
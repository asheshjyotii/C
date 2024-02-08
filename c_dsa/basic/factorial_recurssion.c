#include<stdio.h>
int factorial(int n)
{
    // base condition where recursion stops
    if(n==0||n==1)
    {
        return 1;
    }
    else
    {
        return n*factorial(n-1);
    }
}
int main ()
{
    int n;
    printf("Enter a number to find factorial\n");
    scanf("%d",&n);
    printf("The factorial of %d is %d",n,factorial(n));
}
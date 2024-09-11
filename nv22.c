//program to calculate factorial
#include<stdio.h>
unsigned long factorial(int n)
{
    if(n==0||n==1)
    {
        return 1;
    }
    return n*factorial(n-1);
}
int main()
{
    int n;
    printf("Enter a positive number: ");
    scanf("%d",&n);
    if(n<0)
    {
        printf("Negative number's factorial is not exist.\n");
    }
    else
    {
        printf("Factorial of %d=%lu\n",n,factorial(n));
    }
    return 0;
}
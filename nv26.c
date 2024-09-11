//print sum of all odd and even number between 1 to n
#include<stdio.h>
int main()
{
    int n;
    printf("Enter n: ");
    scanf("%d",&n);
    int sumO=0;
    for(int i=1;i<=n;i=i+2)
    {
        sumO=sumO+i;
    }
    printf("Sum of odd numbers is %d\n",sumO);
    int sumE=0;
    for(int i=0;i<=n;i=i+2)
    {
        sumE=sumE+i;
    }
    printf("Sum of even numbers is %d",sumE);
    return 0;
}
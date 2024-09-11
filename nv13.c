//check weather a number is even or odd
#include<stdio.h>
int main()
{
    int no;
    printf("Enter an integer: ");
    scanf("%d",&no);
    if(no%2==0)
    {
        printf("%d is even.\n",no);
    }
    else
    {
        printf("%d is odd.\n",no);
    }
    return 0;
}
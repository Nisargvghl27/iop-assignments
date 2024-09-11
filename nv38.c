//print square of numbers
#include<stdio.h>
int main()
{
    int n;
    printf("Enter n: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        printf("%d \t",i*i);
    }
    return 0;
}
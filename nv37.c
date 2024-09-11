//print even numbers
#include<stdio.h>
int main()
{
    int n;
    printf("Enter n: ");
    scanf("%d",&n);
    for(int i=2;i<=n;i=i+2)
    {
        printf("%d \t",i);
    }
    return 0;
}
//read three numbers and print max using conditional operator
#include<stdio.h>
int main()
{
    int a,b,c,m;           //m=max
    printf("Enter three numbers: ");
    scanf("%d %d %d",&a,&b,&c);
    m=a>b ? (a>c ? a:c):(b>c ? b:c);
    printf("max of three number is: %d",m);
    return 0;
}
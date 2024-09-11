//swap two variable using third variale
#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the value of a: ");
    scanf("%d", &a);
    printf("ENter the value of b: ");
    scanf("%d", &b);
    printf("before swapping:\n");
    printf("a=%d\n",a);
    printf("b=%d\n",b);
    c=a;
    a=b;
    b=c;
    printf("After swapping:\n");
    printf("a=%d\n",a);
    printf("b=%d\n",b);
    return 0;
}
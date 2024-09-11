//calculate power without using header file(math.h)
#include<stdio.h>
void power(int b,int e);
int main()
{
    int b,e;
    printf("Enter base: ");
    scanf("%d",&b);
    printf("Enter exponent: ");
    scanf("%d",&e);
    power(b,e);
    return 0;
}
void power(int b,int e)
{
    int result=1;
    for(int i=0;i<e;i++){
    result *=b;
    }
    printf("Power is:%d",result);
}
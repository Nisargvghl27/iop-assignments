//simple calculator using switch case
#include<stdio.h>
int main()
{
    char operator;
    float a,b;
    printf("enter oprator: ");
    scanf("%c",&operator);
    printf("enter a and b: \n");
    scanf("%f %f",&a,&b);
    switch(operator){
    case '+':
    printf("addition is:%f",a+b);
    break;
    case '-':
    printf("subtraction is:%f",a-b);
    break;
    case '*':
    printf("multiplication is:%f",a*b);
    break;
    case '/':
    printf("devision is:%f",a/b);
    break;}
    return 0;
}
//program to read two numbers and perform arithmetic operation using switch case
#include<stdio.h>
int main()
{
    char op;
    printf("Enter operator: ");
    scanf("%c",&op);
    double a,b;
    printf("Enter a and b: \n");
    scanf("%lf %lf",&a,&b);
    switch(op){
        case '+':
        printf("Addition is:%lf",a+b);
        break;
        case '-':
        printf("Subtraction is:%lf",a-b);
        break;
        case '*':
        printf("Multiplication is:%lf",a*b);
        break;
        case '/':
        if(b==0){
            printf("denominator 0 is not possible.");
        } else {
        printf("division is:%lf",a/b);}
        break;
    }
    return 0;
}
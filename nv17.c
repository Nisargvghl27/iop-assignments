//Read three numbers and print max using logical operator
#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter three numbers: \n");
    scanf("%d %d %d",&a,&b,&c);
    if(a>b && b>c){
        printf("Max number is:%d",a);}
    else if(b>a && a>c){
        printf("Max number is:%d",b);}
    else if(c>a && a>b){
        printf("Max number is:%d",c);}
    else if(a>c && c>b){
        printf("Max number is:%d",a);}
    else if(c>b && b>a){
        printf("Max number is:%d",c);}
    else if(b>c && c>a){
        printf("Max number is:%d",b);}
    else{
        printf("Enter different numbers");}
    return 0;
}
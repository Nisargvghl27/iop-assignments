//calculate the gross salary
#include<stdio.h>
int main()
{
    float bs,al,gs;
    //bs=Basic Salary,al=Allowances,Gross Salary
    printf("Enter Basic Salary: ");
    scanf("%f", &bs);
    printf("Enter Allowances: ");
    scanf("%f", &al);
    gs=bs+al;
    printf("Gross Salary: %f %f\n", gs);
    return 0;
}